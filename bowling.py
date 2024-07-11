```
def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("X", "10").replace("/","2").split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            # Strike
            score += 10 + (rolls[i+1]+min(10,rolls[i+2]))//2*2
            i += 2
        elif rolls[i] == 5 or (rolls[i] + rolls[i+1]) == 10:
            # Spare
            score += 5 + rolls[i+1]
            i += 2
        else:
            # Regular frame
            if rolls[i] > 0 and rolls[i+1] > 9:
                score += min(rolls[i], 10) + min(10, rolls[i+1]) + (10 - min(rolls[i+1], 10)) // 2 * 2
                i += 2
            else:
                # Single roll for this frame
                score += rolls[i] + min(10, rolls[i+1])
                i += 2
    return score