def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2] == "X":
                strike = True
            elif frames[i * 2].isdigit():
                if int(frames[i * 2]) + int(frames[i * 2 + 1]) >= 10:
                    spare = True
            else:
                score += min(int(frames[i * 2]), 10)
                score += int(frames[i * 2 + 1])
        else:
            score += int(frames[i * 2 : i * 2 + 2])
    if strike:
        score += 10 + 10 * (9 - i)
    elif spare:
        score += 10 + sum(map(int, frames[i * 2 + 1 :]))
    return score