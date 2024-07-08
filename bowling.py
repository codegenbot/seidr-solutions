def bowling_score(s):
    score = 0
    frames = [c for c in s]
    frame = 1
    i = 0
    while frame <= 10:
        if frames[i] == "X":
            score += 10
            score += 10 if i + 1 < len(frames) and frames[i + 1] == "X" else 0
            score += (
                10
                if i + 2 < len(frames) and frames[i + 2] == "X"
                else (
                    int(frames[i + 1])
                    if i + 1 < len(frames) and frames[i + 1] != "/"
                    else int(frames[i + 2])
                )
            )
            i += 1
        elif frames[i] == "/":
            score += 10 - int(frames[i - 1])
            score += (
                10
                if i + 1 < len(frames) and frames[i + 1] == "X"
                else int(frames[i + 1])
            )
        else:
            if frames[i] != "-":
                score += int(frames[i])
        i += 1
        if frames[i - 1] == "X" or frames[i - 1] == "/":
            frame += 1
    return score


s = input()
print(bowling_score(s))