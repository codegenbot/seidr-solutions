def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if frames[i] == "X":
            score += 10
            if i + 2 < len(frames):
                score += (
                    10
                    if frames[i + 2] == "X"
                    else (10 if frames[i + 2] == "/" else int(frames[i + 2]))
                )
                if frames[i + 4] == "/":
                    score += 10 - int(frames[i + 2])
        elif frames[i] == "/":
            score += 10 - int(frames[i - 1])
            if i + 1 < len(frames):
                score += 10 if frames[i + 1] == "X" else int(frames[i + 1])
        else:
            score += int(frames[i])
        if frames[i] != "X":
            i += 1
        frame += 1
    return score


frames = input()
print(bowling_score(frames))