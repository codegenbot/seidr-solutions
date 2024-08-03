```
def bowling_score(s):
    score = 0
    roll = 0
    for frame in s:
        if frame.isdigit():
            if len(frame) == 1:
                score += int(frame)
                roll += 1
            else:
                score += sum(map(int, frame))
                roll += 1
        elif frame == 'X':
            score += 10 + (10 - (roll % 2))
            roll += 2
        elif '/' in frame:
            parts = list(map(int, frame.split('/')))
            if parts[0] == 10:
                score += 10 + sum(parts)
                roll += 1
            else:
                score += sum(parts) + (10 - parts[0])
                roll += 2
    return score