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
                score += 10 + int(frames[i * 2 + 1])
        elif "/" in frames[i * 2 + 1 :]:
            if frames[i * 2 + 1 :].count("/") == 0:
                score += 10 + int(frames[i * 2 + 1 :])
            else:
                score += 10
        else:
            if strike:
                score += 10 + 10 + int(frames[i * 2 + 1])
            elif spare:
                score += 10 + int(frames[i * 2 + 1])
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
    return score