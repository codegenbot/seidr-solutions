def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("X", "10").replace("/", "2").split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            # Strike
            score += 10 + rolls[i+1]+rolls[i+2]
            i += 3
        elif rolls[i] == 5 or (i+1 < len(rolls) and rolls[i] + rolls[i+1] <= 10):
            # Spare
            score += 5 + rolls[i+1] if i+1 < len(rolls) else 5 + rolls[i]/2
            i += 2
        else:
            # Regular frame
            score += sum(rolls[i:i+2]) 
            i += 2
    return score