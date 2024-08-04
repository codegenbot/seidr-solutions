```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('/')):
        if len(frame) == 1:  # strike
            score += 10 + (10 * (9 - i))
        elif 'X' in frame:  # spare
            score += 10 + (5 if i < 9 else 0)
        else:
            strikes = frame.count('X')
            non_strikes = len(frame) - strikes
            if strikes == 2 and non_strikes > 0:  # strike followed by a strike
                score += 15
            elif strikes == 1 and non_strikes > 1:  # one strike, two non-strikes
                score += 10 + (int(frame[non_strikes-1]) * 2)
            else:
                score += sum(int(x) for x in frame)
    return score