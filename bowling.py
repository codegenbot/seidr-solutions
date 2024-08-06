def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            score += int(frame) * 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll == 10:
                score += 10 + (
                    i < 9 and sum(int(x) for x in frames.split("/")[1 : i + 2]) or 0
                )
            else:
                score += first_roll + second_roll
        else:
            strike = all(int(x) == 10 for x in frame)
            if strike:
                score += 10 + (
                    i < 9 and sum(int(x) for x in frames.split("/")[1 : i + 2]) or 0
                )
            else:
                score += sum(int(x) for x in frame)
    return score