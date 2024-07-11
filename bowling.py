def bowling_score(frames):
    score = 0
    frames = frames.split('-')
    for i, f in enumerate(frames):
        parts = f.split("/")
        if len(parts) == 1 and parts[0] == 'X':  
            if i < 9:
                score += 10
            elif i == 9:  # last frame, check for strike or spare
                if i + 1 < len(frames):
                    score += int(frames[i+1].split('/')[0]) * 2
        elif parts[0] == '':  
            pass  # skip blank frames
        elif '/' in parts:  
            score += 20
            if i < 9:
                score += sum(map(int, parts[1:]))
        else: 
            score += sum(map(int, parts))
    return score