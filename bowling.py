```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames:
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = 10 - first_roll
            if 'X' in frame or 'x' in frame:
                score += 10 + (10 - first_roll)
                roll = 1
            else:
                score += first_roll + second_roll
        elif 'X' in frame or 'x' in frame:
            score += 10
            roll = 2
        else:
            for i, char in enumerate(frame):
                if char == 'X' or char == 'x':
                    score += 10
                    break
                else:
                    score += int(char)
    return score