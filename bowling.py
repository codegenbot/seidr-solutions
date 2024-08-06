```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames:
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = int(frame.split('/')[-1].split('X')[0]) if 'X' not in frame else 10
            score += min(10, first_roll + second_roll)
            roll += 2 if 'X' in frame or frame[0] == '/' else 1
        elif 'X' in frame:
            score += 10
            roll += 1
        else:
            score += int(frame)
            roll += 1
    return score if roll == 10 else score + (10 - roll) * 10