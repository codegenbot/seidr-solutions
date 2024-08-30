```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            first_roll, second_roll = map(int, re.split('/', frames[i]))
            if second_roll == 10:
                score += 10 + sum(map(int, frames[i+1:i+3]))
            elif first_roll + second_roll < 10:
                score += first_roll + second_roll
            else:
                score += 10 + int(frames[i+1])
        else:
            score += int(frames[i])
    return score