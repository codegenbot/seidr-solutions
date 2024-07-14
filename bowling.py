def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            first_roll = int(frames[i * 2])
            second_roll = int(frames[i * 2 + 1].split("/")[0])
            third_roll = 10 - (first_roll + second_roll)
            if first_roll == 10:
                strike = True
            elif first_roll + second_roll < 10:
                spare = True
        else:
            strike = False
            spare = False
            first_roll = int(frames[i * 2])
            second_roll = int(frames[i * 2 + 1].split("/")[0])
            third_roll = int(frames[i * 2 + 1].split("/")[1])
            if first_roll == 10:
                strike = True
        if strike:
            score += 10 + first_roll + second_roll
        elif spare:
            score += 10 + first_roll
        else:
            score += first_roll + second_roll
    return score