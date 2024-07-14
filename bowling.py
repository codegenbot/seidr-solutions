def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if frame < 10:
                score += 30
            else:
                score += 10 + (int(frames[i + 1]) + int(frames[i + 3])) * 10
            frame += 1
        elif frames[i] == "/":
            score += 10 + int(frames[i - 2])
            frame += 1
        else:
            if int(frames[i : i + 2]) < 10:
                score += int(frames[i : i + 2]) * 10
            else:
                score += 10 + int(frames[i + 1])
            frame += 1
    return score