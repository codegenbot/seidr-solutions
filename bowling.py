```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if '-' in frame:
            bonus_roll = int(frame.split('-')[1])
            if bonus_roll == 10:
                score += 30
            else:
                score += 20 + bonus_roll
            roll += 2
        elif len(frame) > 1:
            first, second = map(int, frame)
            score += first + second
            roll += 2
        else:
            score += int(frame)
            roll += 1
    return score