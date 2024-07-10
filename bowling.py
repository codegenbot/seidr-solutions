```
def bowling_score(frames):
    score = 0
    roll = 0
    for i in range(10):
        if '/' in frames[i]:
            first_roll = int(frames[i].split('/')[0])
            second_roll = int(frames[i].split('/')[1].split('-')[0]) if '-' in frames[i] else int(frames[i].split('/')[1])
            score += sum(range(first_roll, 11))
            roll = max(roll, first_roll)
        else:
            score += sum(range(int(frames[i]), 11))
            roll = max(roll, int(frames[i]))
    if roll < 10 and '/' not in frames[9]:
        score += 10
    return score