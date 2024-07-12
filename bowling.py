```
def bowling_score(frames):
    frames = frames.replace('/', '').replace('X', '10').split()
    score = 0
    frame = 1
    for i in range(len(frames)):
        if len(frames[i]) == 2:
            first_roll, second_roll = map(int, frames[i])
            if first_roll + second_roll == 10:
                if frame < 10:
                    score += 10 + int(frames[i+1].replace('-', '10'))
                else:
                    score += 10 + 0
            else:
                score += first_roll + second_roll
        elif len(frames[i]) > 2:
            first_roll, second_roll, third_roll = map(int, frames[i])
            if first_roll == 10:
                score += 10 + int(frames[i+1].replace('-', '10')) + int(frames[i+2].replace('-', '10'))
            else:
                score += first_roll + second_roll + third_roll
        elif len(frames[i]) == 1:
            score += 10
        frame += 1
    return score