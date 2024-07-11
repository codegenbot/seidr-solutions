def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace('/', '-').split('-')))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            if i+1 >= len(rolls):
                score += 10
            else:
                score += 10 + rolls[i+1]
            i += (i+1 >= len(rolls)) * 2 + 1
        elif rolls[i] > 9:
            if i+1 < len(rolls) and rolls[i+1] > 0:
                if rolls[i] == 10:
                    score += 30
                else:
                    score += 10 + min(rolls[i],10) + (10 - rolls[i]) // 2 * 2
            else:
                score += 10
            i += 2
        else:
            score += min(rolls[i],10)+(10-rolls[i])//2*2
            i += 1
    return score