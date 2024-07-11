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
        elif rolls[i] in [0, 1, 2]:
            # Spare
            score += 5 + rolls[i+1]
            i += 2
        else:
            # Regular frame
            if i < len(rolls) - 1 and (rolls[i]+rolls[i+1]) > 10:
                # Split the frame into two parts
                score += min(10, rolls[i])+(10-min(rolls[i],10))//2*2
                i += 1
            elif i < len(rolls) - 1 and (rolls[i]+rolls[i+1]+rolls[i+2]) > 15:
                score += min(10, rolls[i])
                score += min(5,10-rolls[i])
                if rolls[i+2] in [0, 1, 2]:
                    score += 5 + rolls[i+3]
                else:
                    score += min(5,rolls[i+2])+(5-min(rolls[i+2],5))//2*2
                i += 3
            else:
                # Single roll for this frame
                score += min(10, rolls[i])
                i += 1
    return score