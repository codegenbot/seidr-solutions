import re

def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('[^0-9X]', '', frames)]
    for i in range(0, len(roll), 2):
        if roll[i:i+2].count('X'):
            score += 30
        elif sum(roll[i:i+2]) == 10:
            score += 10 + sum(roll[i+2:])
        else:
            score += sum(roll[i:i+2]) + sum(roll[i+2:])
    return score