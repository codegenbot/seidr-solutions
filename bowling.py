def bowling_score(frames):
    score = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            first_roll = int(frames[i * 2:i * 2].replace("/", "").replace("X", "10"))
            second_roll = int(frames[i * 2 + 1:i * 2 + 2].replace("/", ""))
            if second_roll != 0:
                score += min(first_roll, 10) + max(0, first_roll + second_roll - 10)
            else:
                score += 10
        elif "X" in frames[i * 2:i * 2 + 2]:
            score += 10
        else:
            first_roll = int(frames[i * 2:i * 2].replace("/", ""))
            second_roll = int(frames[i * 2 + 1:i * 2 + 2].replace("/", ""))
            score += first_roll + second_roll
    return score