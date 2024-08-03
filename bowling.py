```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            first_roll = int(frames[i*2].strip('/'))
            second_roll = int(frames[i*2+1].strip('/'))
            score += max(first_roll, second_roll) + min(first_roll, second_roll)
        else:
            score += 10
    return score