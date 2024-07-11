```
def bowling_score(frames):
    score = 0
    frames = frames.split('-')
    for i in range(10):
        parts = frames[i].split("/")
        if len(parts) == 1 or (parts[0] == 'X'):
            if i < 9: 
                score += 10
            else:
                if len(frames[i+1]) == 2: 
                    score += 20
                else:
                    parts = frames[i+1].split("/")
                    score += 10 + int(parts[0])
        elif '/' in parts:
            score += 20
        else:
            for part in parts:
                score += int(part)
    return score