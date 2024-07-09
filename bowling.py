def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else x for x in frames.split('/')]
    i = 0
    while i < len(frames):
        if frames[i] == 'X':  
            score += 10 + (frames[i+1] if i+1 < len(frames) else 0)
        elif frames[i].isdigit() and int(frames[i]) + (int(frames[i+1]) if i+1 < len(frames) and frames[i+1].isdigit() else 0) == 10:  
            score += 10 + frames[i]
        else:
            score += sum(frames[i:i+3])
        i += 3 if len(frames[i:]) >= 3 else 1
    return score