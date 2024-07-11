def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace('/', '0/10').replace(' ', '').split('-')))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            score += 10 + rolls[i+1]+rolls[i+2]
            i += 3
        elif rolls[i] == 10:
            if rolls[i+1]+rolls[i+2]>=10:
                score += 20
                i += 3
            else:
                score += 10 + rolls[i+1]+rolls[i+2]
                i += 3
        elif rolls[i] > 9 or (i+1 < len(rolls) and rolls[i+1] > 9):
            if i+1 < len(rolls) and rolls[i+1]==0:
                score += min(10,20) + (10 - min(10,20)) // 2 * 2
                i += 3
            else:
                score += min(rolls[i],10)+(10-rolls[i])//2*2
                i += 1
        else:
            if rolls[i] == 0 and i+1 < len(rolls) and rolls[i+1]>9:
                score += min(10,20) + (10 - min(10,20)) // 2 * 2
                i += 2
            elif rolls[i] == 0 and i+1 >= len(rolls):
                if i>=0:
                    score += min(rolls[i-1],10)+(10-rolls[i-1])//2*2
                break
            else:
                score += rolls[i]
                i += 1
    return score