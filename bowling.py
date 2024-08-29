```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif '/' in frames[i]:
            first_roll, second_roll = map(int, re.split('/', frames[i]))
            score += first_roll + second_roll
        else:
            first_roll, second_roll = map(int, frames[i])
            if first_roll + second_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
    return score