def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if frames[i] == "X":
            score += 10 + (
                10
                if frames[i + 2] == "X"
                else (
                    10
                    if frames[i + 3] == "/"
                    else int(frames[i + 2]) + int(frames[i + 3])
                )
            )
            i += 1
        elif frames[i + 1] == "/":
            score += 10
            score += 10 if frames[i + 2] == "X" else int(frames[i + 2])
            i += 2
        else:
            score += int(frames[i]) + int(frames[i + 1])
            i += 2
        frame += 1
    return score


frames = input()
print(bowling_score(frames))