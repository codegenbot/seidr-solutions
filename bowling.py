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
                score += 10 + sum(map(int, frames[i * 2 + 1 : i * 2 + 3]))
        else:
            if frames[i * 2 : i * 2 + 2] == "X/X":
                strike = True
            elif frames[i * 2 : i * 2].count("/"):
                spare = True
            else:
                score += sum(map(int, frames[i * 2 : i * 2 + 2]))
        if strike:
            score += (
                10
                + sum(map(int, frames[(i + 1) * 2 : (i + 2) * 2]))
                + sum(map(int, frames[(i + 2) * 2 : (i + 3) * 2]))
            )
        elif spare:
            score += 10 + sum(map(int, frames[(i + 1) * 2 : (i + 2) * 2]))
    return score