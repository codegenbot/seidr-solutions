```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split()):
        if '/' in frame:
            first_roll, second_roll = map(int, frame.split('/'))
            if 'X' in frame or 'x' in frame:
                score += 10 + (second_roll if roll == 1 else sum(map(int, frame)))
                roll = 2
            else:
                score += first_roll + second_roll
        elif 'X' in frame or 'x' in frame:
            score += 10
            roll = 0
        else:
            if 'X' in frame or 'x' in frame:
                score += 10
                roll = 1
            else:
                score += sum(map(int, frame))
    return score