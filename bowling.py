```
def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("//", "-").split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            score += 10
            i += 1
        elif i+2 < len(rolls) and rolls[i]+rolls[i+1] == 10:
            score += 10
            i += 2
        else:
            score += min(rolls[i],10)+(10-rolls[i])//2*2
            i += 1
    return score