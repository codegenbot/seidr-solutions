```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll < 9 and first_roll + second_roll == 10:
                score += 10
                roll += 1
            else:
                score += first_roll + second_roll
        elif len(frame) > 2:
            strike = True
            for i in range(len(frame)):
                if frame[i] != 'X':
                    strike = False
                    break
            if strike:
                score += 10 + (10 - roll)
                roll = 0
            else:
                first_roll = int(frame[0])
                second_roll = int(frame[1])
                third_roll = int(frame[2])
                score += first_roll + second_roll + third_roll
        roll += 1
    return score