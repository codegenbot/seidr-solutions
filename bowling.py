```
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) for x in score]
    total = 0
    roll = 0
    for i in range(len(frames)):
        if i < 9 and frames[i] == 10:
            total += 10 + frames[i+1] if i+1 < len(frames) else 10
            roll += 2
        elif i < 9 and frames[i] != 10:
            first_roll = min(frames[i], 10)
            second_roll = 10 - first_roll
            total += first_roll + second_roll if roll > 0 else first_roll
            roll += 1
        else:
            total += frames[i]
    return total