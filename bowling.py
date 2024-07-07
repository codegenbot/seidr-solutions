```python
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
            if first_roll + second_roll == 10:
                score += 10
                roll += 1
            else:
                score += first_roll + second_roll
                roll += 1
        elif len(frame) > 2:
            rolls = list(map(int, frame))
            score += sum(rolls)
            roll += len(rolls)
    return score