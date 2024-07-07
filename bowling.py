```
def bowling_score(game):
    score = 0
    roll = list(map(int, re.sub('[^0-9X]', '', game)))
    for i in range(10):
        if roll[i*2] == 10:
            score += 10 + sum(roll[i*2+1:i*2+3])
        elif roll[i*2] < 10 and 'X' not in roll[i*2:i*2+2]:
            score += roll[i*2] + roll[i*2+1]
        else:
            if 'X' in roll[i*2:i*2+2]:
                score += 10
            else:
                score += roll[i*2] + roll[i*2+1]
    return score