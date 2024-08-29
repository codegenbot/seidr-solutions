```Python
def bowling_score(s):
    score = 0
    frames = [int(x) if x.isdigit() else 10 if x == 'X' else 10 - int(x) if x[0] == '/' else 0 for x in s.split()]
    strike_count = 0
    spare_count = 0
    for i, frame in enumerate(frames):
        if frame == 10:  
            score += 10 + (strike_count * 2) + (spare_count * 3)
            strike_count += 1
        elif frame < 10:  
            if sum([frames[i-1], frame]) == 10:  
                score += 10 + frames[i+1] if i < len(frames) - 1 else 10
                spare_count += 1
            else:
                score += frame
        elif frame > 10:  
            pass
    return score