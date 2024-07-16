```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            if frames[i * 2:i * 2 + 1] == "X":
                score += 10
            else:
                first_roll = int(frames[i * 2:i * 2].replace("/", ""))
                second_roll = int(frames[i * 2 + 1:].replace("-", ""))
                if "/" in frames[i * 2:i * 2 + 1]:
                    score += first_roll + second_roll
                else:
                    score += first_roll + second_roll
        elif "-" not in frames[i * 2:i * 4] and frames[i * 2:i * 4].count("/") > 0:
            first_roll = int(frames[i * 2:i * 3].replace("/", ""))
            second_roll = int(frames[i * 3:].replace("-", ""))
            score += first_roll + second_roll
        else:
            score += 10
    return score