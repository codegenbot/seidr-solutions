def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2] == "X":
                strike = True
            elif frames[i * 2] + frames[i * 2 + 1] == "10":
                spare = True
            else:
                score += 10 - int(frames[i * 2])
        else:
            if frames[i * 2 : i * 2 + 2].count("X") > 0:
                strike = True
            elif int(frames[i * 2 : i * 2 + 2]) == 10:
                spare = True
            else:
                score += int(frames[i * 2 : i * 2 + 2])
        if not strike and not spare:
            score += int(frames[i * 2 : i * 2 + 1])
    return score