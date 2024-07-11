```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i * 2] == "X":
            strike = True
            bonus = False
        elif "/" in frames[i * 2 : i * 2 + 2]:
            spare = True
            bonus = False
        else:
            score += sum(map(int, frames[i * 2:i * 2 + 2]))
        if strike:
            if i < 8:
                score += sum(map(int, frames[(i + 1) * 2:(i + 2) * 2])) + sum(map(int, frames[(i + 2) * 2:(i + 3) * 2]))
        elif spare:
            score += 10
            if i < 8 and frames[(i + 1) * 2] != "X" and frames[(i + 1) * 2] !="/":
                bonus = True
                score += sum(map(int, frames[(i + 1) * 2:(i + 2) * 2]))
    return score