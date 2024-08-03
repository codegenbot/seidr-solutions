def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames) and frame <= 10:
        if frames[i] == "X":
            score += (
                10
                + (10 if i + 1 < len(frames) and frames[i + 1] == "X" else 0)
                + (
                    int(frames[i + 1])
                    if i + 1 < len(frames) and frames[i + 1].isdigit()
                    else 0
                )
                + (
                    int(frames[i + 2])
                    if i + 2 < len(frames) and frames[i + 2].isdigit()
                    else 0
                )
            )
            i += 1
        elif frames[i] == "/":
            score += (
                10
                - int(frames[i - 1])
                + (
                    10
                    if i + 1 < len(frames) and frames[i + 1] == "X"
                    else (
                        int(frames[i + 1])
                        if i + 1 < len(frames) and frames[i + 1].isdigit()
                        else 0
                    )
                )
            )
        elif frames[i].isdigit():
            score += int(frames[i])
        i += 1
        if frames[i - 1] in ["X", "/"]:
            frame += 1
    return score


frames = input()
print(bowling_score(frames))