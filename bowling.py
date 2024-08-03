```
def bowling_score(frames):
    score = 0
    roll = [int(i) for i in re.sub('[^0-9X]', '', frames).replace('X', '10').replace('/', '')]
    
    for i in range(0, len(roll), 2):
        if roll[i] == 10:
            score += 10 + (i+1 > len(roll)-1 and 0 or roll[i+1])
        elif roll[i:i+2].count('10') >= 1:
            score += 20
            i -= 1
        else:
            score += sum(roll[:i+2]) if roll[i] + roll[i+1] < 11 else 10 + (i+2 > len(roll)-1 and 0 or roll[i+2])
    return score