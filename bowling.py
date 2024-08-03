```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            first_roll = int(frames[i].split('/')[0])
            second_roll = 10 - int(frames[i].split('/')[1])
        else:
            first_roll = int(frames[i])
            second_roll = 0
        score += max(first_roll, second_roll) + min(first_roll, second_roll)
    return score