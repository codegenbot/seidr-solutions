def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            if frames[i * 2] == "X":
                strike = True
            else:
                first_roll = int(frames[i * 2])
                second_roll = int(frames[i * 2 + 1].split("/")[0])
                score += 10 + first_roll + second_roll
                if not strike:
                    score += second_roll
        else:
            first_roll = int(frames[i * 2])
            second_roll = int(frames[i * 2 + 1].split("/")[0])
            third_roll = int(frames[i * 2 + 1].split("/")[1])
            score += first_roll + second_roll + third_roll
    return score