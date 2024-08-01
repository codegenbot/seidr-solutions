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
        if strike:
            score += 10 + sum(map(int, frames[2 * i + 2 :]))
        elif spare:
            score += 10 + map(int, frames[2 * i + 2 :]).pop(0)
    return score