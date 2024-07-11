def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("X", "10").replace("/","2").split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            score += 10 + rolls[i+1]+rolls[i+2]
            i += 3
        elif rolls[i] == 2 or (i+1 < len(rolls) and rolls[i+1] == 0):
            first = rolls[i]
            if i+2 < len(rolls):
                score += 5 + rolls[i+1] + rolls[i+2]
            else:
                score += 5
            i += 2
        else:
            score += rolls[i] + (10 - rolls[i]) // 2 * 2
            i += 1
    return score