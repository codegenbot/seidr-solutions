```
def bowling_score(game):
    score = 0
    roll = [int(x) for x in re.sub('[/-X]', '', game)]
    for i in range(10):
        if len(roll) >= i + 1:
            if roll[i] == 10: 
                score += 10 + (10 - i)
            elif any(10 - k > r for k, r in enumerate(roll[i:])):
                score += sum(roll[:i+1])
            else:
                score += sum(roll[:i+1]) + roll[i]
        else:
            if roll[i] == 10:
                score += 10
            else:
                score += sum(roll[:i+1])
    return score