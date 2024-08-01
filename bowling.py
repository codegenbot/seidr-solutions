```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            first_roll, second_roll = map(int, frames[i].split('/'))
            if first_roll + second_roll == 10:
                score += 10 + sum(map(int, frames[:i]))
            else:
                score += first_roll + second_roll
        else:
            score += int(frames[i])
    return score