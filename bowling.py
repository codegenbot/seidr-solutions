```
def bowling_score(s):
    score = 0
    rolls = list(map(int, s.replace('/','-').split("-")))
    i = 0
    while i < len(rolls):
        if rolls[i] == 10:
            # Strike: add 10 plus next two rolls
            score += 10 + rolls[i+1]+rolls[i+2]
            i += 3
        elif rolls[i] >= 5 and (i+2 > len(rolls) or rolls[i+2] < 5):
            # Spare: add 5 plus the remaining roll in this frame
            score += 5 + rolls[i+1]
            i += 2
        else:
            # Normal roll: just add the current roll
            if i+1 < len(rolls) and (rolls[i] > 9 or (i+2 <= len(rolls) and rolls[i+2] > 9)):
                score += min(rolls[i],10)+(10-rolls[i])//2*2
                i += 1
            else:
                score += rolls[i]
                i += 1
    return score