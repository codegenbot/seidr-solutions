def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace('-', ' ').split()))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            if i+1 >= len(rolls) or rolls[i+1] > 9: 
                score += 10 + (10 - rolls[i]) // 2 * 2 
            else:
                score += 10 + rolls[i+1] + rolls[i+2]
            i += 3
        elif rolls[i] == -1:
            if i+1 >= len(rolls) or rolls[i+1] > 9: 
                score += 5 + (10 - rolls[i]) // 2 * 2 
            else:
                score += 5 + rolls[i+1] + rolls[i+2]
            i += 3
        else:
            if i+1 >= len(rolls) or rolls[i+1] > 9: 
                score += min(rolls[i],10)+(10-rolls[i])//2*2
            else:
                score += rolls[i]
            i += 1
    return score