```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.split('/')
    for frame in frames:
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
            else:
                score += max(first_roll, second_roll)
        else:
            first_roll = int(frame[0])
            if frame[0] == 'X':
                score += 10
                roll = 10
            else:
                score += first_roll
            if len(frames) > 1 and (len(frames[1]) == 2 or frames[1][0] == 'X'):
                continue
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if frame[0] == 'X':
                score += second_roll + third_roll
            else:
                score += first_roll + second_roll
        roll = 0
    return score