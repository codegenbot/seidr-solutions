def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace('/-', '-').split('-')))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            if i+1 < len(rolls) and rolls[i+1] > 9:
                score += 20
                i += 2
            else:
                score += 10 + rolls[i+1]
                i += 2
        elif rolls[i] > 9 or (i+1 < len(rolls) and rolls[i+1] > 9):
            if i+1 < len(rolls) and rolls[i+1] == '/':
                x, y = map(int, [0]+list(map(int, str(rolls[i]).lstrip('0').split(''))))
                score += min(x,10)+(10-x)//2*2
                i += 3
            else:
                score += min(rolls[i],10)+(10-rolls[i])//2*2
                i += 1
        else:
            score += rolls[i]
            i += 1
    return score