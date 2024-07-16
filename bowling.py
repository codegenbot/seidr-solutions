```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll = 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll == 1:
                score += first_roll + second_roll
            else:
                score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            strike = 1
            while len(frame) > 2 and strike < 3:
                score += int(frame[0])
                frame = frame[1:]
                if len(frame) == 2:
                    first_roll = int(frame[0])
                    second_roll = int(frame[1])
                    score += first_roll + second_roll
                    break
                else:
                    score += int(frame[0]) * 2
                    strike += 1
            roll = 0
    return score