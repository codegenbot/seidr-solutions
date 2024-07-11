```
def bowling_score(frames):
    score = 0
    frames = frames.split('-')
    for i, f in enumerate(frames):
        parts = f.split("/")
        if len(parts) == 1 and parts[0] == 'X':
            if i < 9:
                score += 10
            else:
                if i + 2 >= len(frames):
                    score += 10
                elif frames[i+1].startswith('X'):
                    score += 30
                else:
                    score += 10 + int(frames[i+1].split('/')[0])
        elif parts[0] == '':
            if i < 9:
                score += 10
            else:
                score += 10 + int(frames[i+1].split('/')[0])
        elif '/' in parts:
            score += 10
            if i + 2 >= len(frames):
                continue
            score += int(parts[1])
        else:
            for part in parts:
                score += int(part)
    return score