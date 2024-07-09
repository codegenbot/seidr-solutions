```
def bowling_score(s):
    score = 0
    frames = [list(map(int, list(frame))) for frame in re.findall('([0-9X]{1,3})', s)]
    
    for i, frame in enumerate(frames):
        if len(frame) == 1:  # strike
            score += 10 + (10 * (len(frames) - i))
        elif sum(frame) == 10:  # spare
            score += 10 + frames[i+1][0] if i < 9 else 10
        else:
            score += sum(frame)
    return score