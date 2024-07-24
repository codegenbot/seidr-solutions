```
def bowling_score(roll):
    score = 0
    roll = roll.replace('/', '')
    for i in range(len(roll)):
        if roll[i].isdigit():
            if i < 2:
                score += int(roll[i]) * 10 + int(roll[i+1])
            else:
                score += int(roll[i])
        elif roll[i] == 'X':
            score += 30
        elif roll[i] == '-':
            continue
    return score