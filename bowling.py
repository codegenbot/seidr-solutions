```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('[/-]', '', frames).split()]
    for i in range(0, 10):
        if len(roll) > i:
            if roll[i] == 10:
                score += 10 + (0 if i < 9 else 0)
            elif sum(roll[i:i+2]) <= 10:
                score += sum(roll[i:i+2])
                del roll[:i+2]
            else:
                score += roll[i] + roll[i+1]
                del roll[:i+2]
        else:
            break
    return score