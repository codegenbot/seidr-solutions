```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.replace('/', ' ').split():
        if len(frame) == 1:
            score += int(frame)
            roll = 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll == 1:
                score += first_roll + second_roll
            else:
                if first_roll == 10:
                    score += 10 + sum(int(x) for x in frames.split()[frames.split().index(frame)+1:])
                else:
                    score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            if int(''.join(frame)) == 10:
                score += 10
                roll = 1
            else:
                raise ValueError('Invalid frame')
    return score