```
def bowling_score(frames):
    frames = frames.split('/')
    score = 0
    for i in range(len(frames)):
        frame = frames[i]
        if frame == 'X':
            score += 10
        elif frame in ['--', '-1']:
            continue
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
        else:
            first_roll, second_roll, third_roll = map(int, frame)
            if first_roll + second_roll == 10:
                score += 10 + third_roll
            elif second_roll + third_roll == 10:
                score += 10 + first_roll
            else:
                score += first_roll + second_roll + third_roll
    return score