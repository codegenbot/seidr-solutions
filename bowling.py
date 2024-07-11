def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace('/', ' -').split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            score += 10 + rolls[i+1]+rolls[i+2]
            i += 3
        elif rolls[i] == 5:
            x, y = map(int, str(rolls[i]).split(''))
            if x > 0 and y > 0:
                score += min(x, 10) + (10 - x) // 2 * 2
            else:
                score += x + y
            i += 3
        else:
            score += rolls[i]
            i += 1
    return score