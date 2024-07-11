```
def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("X", "10").replace("/","2").split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            # Strike
            score += 10
            if i + 1 < len(rolls):
                score += rolls[i+1]
            if i + 2 < len(rolls):
                score += rolls[i+2]
            i += 2
        elif rolls[i] + rolls[i+1] == 10:
            # Spare
            score += 5
            score += rolls[i+2]
            i += 2
        else:
            # Regular frame
            score += rolls[i]
            if rolls[i] < 10:
                score += rolls[i+1]
            i += 1
    return score