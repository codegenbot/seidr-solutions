```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            if frames[i * 2:i * 2 + 1] == "X":
                score += 10
            elif frames[i * 2:i * 2 + 2].replace("/", "") == "10":
                score += 20
            else:
                first_roll = int(frames[i * 2:i * 2].replace("/" or "-", ""))
                second_roll = int(frames[i * 2 + 1:i * 2 + 2].replace("/" or "-", ""))
                if first_roll == 10:
                    score += 20
                else:
                    score += first_roll + second_roll
        else:
            score += 10
    return score