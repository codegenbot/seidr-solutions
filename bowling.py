```
def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("X", "10").replace("/","2").split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            # Strike
            score += 10 + (rolls[i+1]+rolls[i+2])//2*2
            i += 2
        elif rolls[i] == -1 or rolls[i] == 2:
            # Spare
            score += 5 + rolls[i+1]
            i += 2
        else:
            # Regular frame
            if rolls[i] > 9:
                # Split the frame into two parts
                score += min(rolls[i],10)+(10-rolls[i])//2*2
                i += 1
            elif i < len(rolls) - 1 and rolls[i+1] > 9:
                score += min(rolls[i],10)
                score += min(10,rolls[i+1])+(10-min(rolls[i+1],10))//2*2
                i += 2
            else:
                # Single roll for this frame
                score += rolls[i]
                i += 1
    return score