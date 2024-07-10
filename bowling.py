def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            score += sum(
                [
                    int(frames[j])
                    for j in range(i + 1, i + 3)
                    if j < len(frames) and frames[j] != "/"
                ]
            )
            frame += 1
            if frame == 10:
                break
        elif frames[i] == "/":
            score += 10 - int(frames[i - 1])
            score += int(frames[i + 1])
            frame += 1
        elif frames[i] != "-":
            score += int(frames[i])
    return score

frames = input()
print(bowling_score(frames))