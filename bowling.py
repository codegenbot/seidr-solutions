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
                if i + 1 < len(frames):
                    score += int(frames[i+1].split('/')[0]) * 2
        elif parts[0] == '':  
            if i < 9:
                score += 10
            else: 
                if i + 1 < len(frames):
                    score += int(frames[i+1].split('/')[0])
        elif '/' in parts:  
            score += 20
        else: 
            for part in parts:
                score += int(part)
    return score