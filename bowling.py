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
        else:
            if frames[i * 2 : i * 2 + 2].count("/"):
                score += 10 - int(frames[i * 2])
            elif frames[i * 2] == "X":
                strike = True
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
        if strike and i < 9:
            score += 10 + int(frames[(i + 1) * 2 + 1])
        elif spare and i < 9:
            score += 10 + int(frames[(i + 1) * 2])
    return score