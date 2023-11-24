def bowling_score(frames):
    score = 0
    frame = 1
    i = 0

    while frame <= 10:
        if frames[i] == "X":
            score += 10

            if i < len(frames) - 2:
                if frames[i + 2] == "X":
                    score += 10
                elif frames[i + 2] == "/":
                    score += 10 - int(frames[i + 1])
                else:
                    score += int(frames[i + 1]) + int(frames[i + 2])

            if i < len(frames) - 1:
                if frames[i + 1] == "X":
                    score += 10
                elif frames[i + 1] == "/":
                    score += 10
                else:
                    score += int(frames[i + 1])

            frame += 1
            i += 1
        elif frames[i + 1] == "/":
            score += 10

            if i < len(frames) - 2:
                if frames[i + 2] == "X":
                    score += 10
                elif frames[i + 2] == "/":
                    score += 10 - int(frames[i + 2 - 1])
                else:
                    score += int(frames[i + 2])

            frame += 1
            i += 2
        else:
            score += int(frames[i]) + int(frames[i + 1])
            frame += 1
            i += 2

    return score


frames = input().strip()
print(bowling_score(frames))