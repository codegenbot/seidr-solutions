```
def bowling_score(frames):
    score = 0
    for frame in frames.split('\n'):
        if '/' in frame:
            first_roll, second_roll = map(int, frame.split('/'))
            if 'X' in frame.upper():
                score += 10 + (10 - first_roll)
            else:
                score += first_roll + second_roll
        elif 'X' in frame.upper() or 'x' in frame:
            score += 10
        else:
            score += sum(map(int, frame))
    return score