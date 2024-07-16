def bowling_score(frames):
    score = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            if frames[i * 2:i * 2 + 1] == "X":
                score += 10
            elif "/" in frames[i * 2:i * 2 + 4]:
                first_roll = int(frames[i * 2:i * 3].replace("/", ""))
                second_roll = int(frames[i * 2 + 1:i * 2 + 2].replace("/", ""))
                score += first_roll + second_roll
            else:
                first_roll = int(frames[i * 2:i * 3])
                second_roll = int(frames[i * 2 + 1:i * 2 + 2])
                score += min(first_roll, second_roll) + max(0, first_roll + second_roll - 10)
        else:
            score += 10
    return score