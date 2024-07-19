def bowling_score(frames):
    score = 0
    bonus = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2] == "X":
                strike = True
                score += 10
                bonus = 0
            elif frames[i * 2] + frames[i * 2 + 1] == "10":
                spare = True
                score += 10
                bonus = 0
            else:
                score += 1 + int(frames[i * 2 + 1])
        else:
            if frames[i * 2] == "X":
                strike = True
                score += 10
                bonus = 0
            elif frames[i * 2] + frames[i * 2 + 1] == "10":
                spare = True
                score += 10
                bonus = 0
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
        if strike:
            bonus += sum(int(x) for x in frames[2 * i + 2:])
        elif spare:
            bonus += sum(int(x) for x in frames[2 * i + 2:2*(i+1)])
    score += bonus
    return score