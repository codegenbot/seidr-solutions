```
def bowling_score(frames):
    score = 0
    roll = list(map(int, re.sub('[^0-9X]', '', frames).replace('/', '')))
    for i in range(0, len(roll), 2):
        if roll[i:i+2].count('X'):
            score += 10 + sum(roll[j] for j in range(i+2) if roll[j] < '5')
        elif roll[i:i+2].count('/'):
            first_roll = int(roll[i])
            second_roll = 10 - first_roll
            score += first_roll + second_roll + sum(roll[j] for j in range(i+2) if roll[j] < '5' and roll[j] != 'X')
        else:
            score += sum(roll[i:i+2])
    return score