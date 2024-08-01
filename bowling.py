def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 1]:
            strike = True
        elif frames[i * 2 : i * 2 + 1].count("X") == 2:
            spare = True
        else:
            strike = False
            spare = False
        if i < 9 and not strike and not spare:
            score += sum(int(x) for x in frames[i * 2 : i * 2 + 2])
        elif strike:
            score += 10 + sum(int(x) for x in frames[(i + 1) * 2 : (i + 2) * 2])
        elif spare:
            score += 10 + int(frames[i * 2 + 1].strip("/"))
    return score