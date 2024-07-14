def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2 : i * 2 + 1] == "X":
                strike = True
            elif frames[i * 2 : i * 2 + 2].count("/"):
                spare = True
            else:
                score += 10
        else:
            if frames[i * 2 : i * 2 + 2].count("/"):
                score += 10 - int(frames[i * 2])
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
    for i in range(10):
        if strike and i < 9:
            score += 10
        elif spare and i < 9:
            score += 10
        elif i == 9 and strike:
            score += 10 + int(frames[18]) + int(frames[19])
        elif i == 9 and spare:
            score += 10 + int(frames[18])
    return score