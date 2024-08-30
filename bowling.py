def bowling(score):
    frames = [int(i) if i.isdigit() else "X" for i in score]
    scores = []
    roll = 0
    frame = 1
    while frame <= len(frames):
        if frames[roll] == "X":
            scores.append(
                10
                + (
                    frames[roll + 1]
                    if roll + 2 < len(frames) and frames[roll + 1] != "X"
                    else 10
                )
            )
            roll += 2
        elif frames[roll].isdigit() and int(frames[roll]) < 10:
            scores.append(sum(int(i) for i in frames[roll : roll + 2]))
            roll += 2
        else:
            if len(frames) - roll >= 3:
                scores.append(sum(int(i) for i in frames[roll : roll + 3]))
            else:
                scores.append(
                    10
                    + (
                        frames[roll + 1]
                        if roll + 2 < len(frames) and frames[roll + 1] != "X"
                        else 0
                    )
                )
            roll += 3
        frame += 1
    return sum(scores)