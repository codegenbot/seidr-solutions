```
def bowling_score(frames):
    score = 0
    frames = frames.replace('-', '/').split('/')
    for i, f in enumerate(frames):
        if f == 'X':
            if i < 9:
                score += 10
            else: 
                if len(frames) > i+1 and frames[i+1] != 'X':
                    score += int(frames[i+1]) * 2
        elif f == '':
            if i < 9:
                score += 10
            else: 
                if i + 1 < len(frames):
                    score += int(frames[i+1])
        elif f != '':  
            score += int(f)
    return score