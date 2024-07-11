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
            if i+2 < len(rolls) and min(rolls[i:i+3]) >= 5:
                score += sum(rolls[i:i+3])
                i += 3
            else:
                score += rolls[i]
                i += 1
    return score