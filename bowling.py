def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            strike = False
            spare = False
            rolls = list(map(int, frames[i].split("/")))
            if len(rolls) == 2:
                score += sum(rolls)
            else:
                if rolls[0] + rolls[1] >= 10:
                    score += sum(rolls)
                elif rolls[0] == 10:
                    strike = True
                else:
                    spare = True
        else:
            strike = False
            spare = False
            roll = int(frames[i])
            if roll == 10:
                strike = True
            else:
                score += roll
        if i < 9:
            if strike:
                score += (
                    10
                    + sum(list(map(int, frames[i + 1].split("/"))))
                    + sum(list(map(int, frames[i + 2].split("/"))))
                )
            elif spare:
                score += 10 + int(frames[i + 1])
    return score