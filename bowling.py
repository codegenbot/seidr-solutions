```
def bowling_score(s):
    score = 0
    roll = 0
    for frame in s.split('/'):
        if len(frame) == 1:
            score += int(frame) * 10
            roll = 0
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll == 10:
                roll = 10
            else:
                roll = first_roll + second_roll
            score += roll
        else:
            first_roll, second_roll, third_roll = map(int, frame)
            score += first_roll + second_roll
    return score