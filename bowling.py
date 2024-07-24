def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2] == "X":
                strike = True
            elif frames[i * 2] == "/":
                spare = True
            else:
                first_roll = int(frames[i * 2])
                second_roll = int(frames[i * 2 + 1].split("/")[0])
                score += 10 + first_roll + second_roll
        else:
            first_roll = int(frames[i * 2])
            second_roll = int(frames[i * 2 + 1])
            if sum([int(x) for x in frames[: i * 2 + 2]]) == 10:
                spare = True
            score += first_roll + second_roll
    return score