```
def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("X", "10").replace("/","20").split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            # Strike
            score += 10 + (rolls[i+1] if i+1 < len(rolls) else 0) + (rolls[i+2] if i+2 < len(rolls) else 0)
            i += (3 if i+2 < len(rolls) else 1)
        elif rolls[i] == -1 or rolls[i] == 20:
            # Spare
            score += 5 + (rolls[i+1] if i+1 < len(rolls) else 0) + (rolls[i+2] if i+2 < len(rolls) else 0)
            i += (3 if i+2 < len(rolls) else 1)
        else:
            # Regular frame
            score += rolls[i]
            if i+1 < len(rolls):
                score += rolls[i+1]
            i += 1
    return score