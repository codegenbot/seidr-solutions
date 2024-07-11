```
def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("X", "10").replace("/", "2").split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            # Strike
            score += 10 + (rolls[i+1] + rolls[i+2] if i+2 < len(rolls) else 0)
            i += (3 if i+2 < len(rolls) else 1)
        elif rolls[i] == -1 or rolls[i] == 2:
            # Spare
            score += 5 + (rolls[i+1] + rolls[i+2] if i+2 < len(rolls) else 0)
            i += (3 if i+2 < len(rolls) else 1)
        else:
            # Regular frame
            if rolls[i] > 9 or (i+1 < len(rolls) and rolls[i+1] > 9):
                # Split the frame into two parts
                score += min(rolls[i],10)+(10-rolls[i])//2*2
                i += 1
            else:
                # Single roll for this frame
                score += rolls[i]
                i += 1
    return score