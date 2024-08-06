def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i : i + 2].count("X") == 2:
            score += int(frames[i - 1]) + 10
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i + 1].replace("/0", "/"))
            if second_roll > 0:
                score += first_roll + second_roll
            else:
                score += first_roll + 10
    return score