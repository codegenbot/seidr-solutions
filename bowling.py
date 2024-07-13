def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            first_roll = int(frames[i * 2])
            second_roll = int(frames[i * 2 + 1].strip("/"))
            if first_roll == 10:
                strike = True
            elif first_roll + second_roll >= 10:
                spare = True
            score += first_roll
            if not strike and not spare:
                score += second_roll
        else:
            strike = False
            rolls = list(map(int, frames[i * 2 : i * 2 + 2]))
            if sum(rolls) == 10:
                strike = True
            score += sum(rolls)
    return score