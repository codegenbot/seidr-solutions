def bowling_score(frames):
    score = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            if frames[i * 2:i * 2 + 1] == "X":
                score += 10
            elif frames[i * 2:i * 2 + 2][0] == "/":
                first_roll = int(frames[i * 2].replace("/", ""))
                second_roll = int(frames[i * 2 + 1].replace("/", ""))

                if first_roll + second_roll < 10:
                    score += first_roll + second_roll
                else:
                    score += 10 + (10 - first_roll - second_roll)
            else:
                first_roll = int(frames[i * 2:i * 2 + 1].replace("-", ""))
                second_roll = int(frames[i * 2 + 1])

                score += first_roll + second_roll
        else:
            if frames[i * 2] == "X":
                score += 10
            elif frames[i * 2] != "0" and frames[i * 2 + 1] != "0":
                first_roll = int(frames[i * 2:i * 2 + 1])
                second_roll = int(frames[i * 2 + 1])

                if first_roll + second_roll < 10:
                    score += first_roll + second_roll
                else:
                    score += 10 + (10 - first_roll - second_roll)
            else:
                score += 10
    return score