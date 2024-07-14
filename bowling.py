def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            first_roll = (
                int(frames[:i].count("X")) * 10 + int(frames[:i].count("/")) * 10 / 2
            )
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        else:
            first_roll = int(frames[i])
            second_roll = 10 - int(frames[i])
            if i + 1 < len(frames) and frames[i + 1] == "/":
                score += int(first_roll) * 2 + int(second_roll)
            else:
                score += int(first_roll) + int(second_roll)
    return score