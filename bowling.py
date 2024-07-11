def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("-", " ").replace("/","").split()))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            score += 10 + (i+1 < len(rolls) and rolls[i+1]) + (i+2 < len(rolls) and rolls[i+2])
            i += 3
        elif rolls[i] < 10:
            score += rolls[i] + ((i+1 < len(rolls) and min(rolls[i], 10) + (10 - rolls[i]) // 2 * 2)
                                if (i+1 < len(rolls) and min(rolls[i], 10) > 0) 
                                else min(rolls[i], 10))
            i += 1
    return score