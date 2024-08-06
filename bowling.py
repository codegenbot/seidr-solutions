```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            first_roll = int(frames[i*2:i*2].lstrip('X'))
            second_roll = int(frames[i*2+1:i*2+2].lstrip('X'))
            score += 10
        elif frames[i*2:i*2].startswith('X'):
            score += 10
            if i < 9:
                for j in range(i+1, 10):
                    if '/' in frames[j*2:j*2+2]:
                        score += sum(map(int, frames[j*2:j*2].lstrip('X')))
                    else:
                        score += int(frames[j*2:j*2])
        else:
            score += first_roll + second_roll
    return score