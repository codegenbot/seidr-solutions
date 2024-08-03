```
def bowling_score(score):
    score = score.replace('/', '')
    total = 0
    roll = 0
    for frame in score:
        if frame.isdigit():
            if len(frame) == 1:
                total += int(frame)
                roll += 1
            else:
                first_roll, second_roll = map(int, frame)
                total += first_roll + second_roll
                roll += 2
        elif frame == 'X':
            total += 10
            roll += 1
        else:
            total += 0
    return total