def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2 : i * 2 + 1] == "X":
                strike = True
            elif frames[i * 2 + 1].isdigit():
                spare = True
            if strike:
                score += 10 + sum(int(x) for x in frames[2 * i + 2 : 20])
            elif spare:
                score += 10 + int(frames[i * 2 + 1])
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
        else:
            score += int(frames[i * 2]) + int(frames[i * 2 + 1])
    return score