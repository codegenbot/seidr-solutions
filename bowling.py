```
def bowling_score(frames):
    score = 0
    frames = frames.split('-')
    for i, f in enumerate(frames):
        parts = f.split("/")
        if len(parts) == 1 and parts[0] == 'X':
            score += 10
            if i < 9:
                score += 10
        elif parts[0] == '':
            score += 10
            if i < 9:
                score += int(frames[i+1].split('/')[0])
        elif len(parts) > 1:
            roll1, roll2 = map(int, parts)
            score += roll1 + roll2
        else:
            for part in parts:
                score += int(part)
    return score