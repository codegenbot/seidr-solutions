Here is the solution:

def bowling_score(game):
    score = 0
    roll = [int(x) for x in re.sub('[^0-9X-]', '', game)]
    for i in range(10):
        if roll[i*2] == 'X':
            score += 30
        elif roll[i*2:i*2+2].count('X') >= 1:
            score += 20 + max(roll[i*2:i*2+2])
        else:
            score += sum(roll[i*2:i*2+2])
    return score