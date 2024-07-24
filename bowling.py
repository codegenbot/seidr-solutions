```
def bowling_score(frames):
    score = 0
    roll = 0
    for i in range(10):
        if '/' in frames[i]:
            first_roll = int(frames[i].split('/')[0])
            second_roll = int(frames[i].split('/')[1])
            if first_roll == 10:
                score += 10 + sum(int(x) for x in frames[roll+1:i+1])
                roll = i
            else:
                score += first_roll + second_roll
        else:
            score += int(frames[i])
        roll += 1
    return score