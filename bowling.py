def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
            frame += 1
        elif frames[i] == "/":
            first_roll = int(frames[i - 1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(frames[i])
            if frames[i + 1] == "X":
                score += 10 + 10
                frame += 2
            elif frames[i + 1] == "/":
                score += 10 + (10 - first_roll)
                frame += 2
            else:
                score += 10 + first_roll + int(frames[i + 1])
                frame += 2
    return score