```
def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace("X", "10").replace("/","2").split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            # Strike
            score += 10 + (rolls[i+1]+min(rolls[i+2],10))//2*2
            i += 2
        elif rolls[i] == 5 or (i< len(rolls) - 1 and rolls[i] + rolls[i+1] <= 10):
            # Spare
            score += 5 + min(10, rolls[i+1])
            i += 2
        else:
            # Regular frame
            if i < len(rolls) - 1:
                if min(rolls[i],10)+min(10,rolls[i+1]) <= 10:
                    score += min(rolls[i],10) + min(10, rolls[i+1])
                    i += 2
                else:
                    score += min(rolls[i],10)
                    score += min(10, rolls[i+1])
                    if len(rolls)-i >=3:
                        score += min(10, rolls[i+2])
                    i += 2
            else:
                # Single roll for this frame
                score += min(rolls[i],10)
                i += 1
    return score