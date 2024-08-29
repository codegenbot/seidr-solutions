```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i].isdigit():
            score += int(frames[i])
        else:
            first_roll, second_roll = map(int, frames[i].split('/'))
            score += first_roll + second_roll
    return score