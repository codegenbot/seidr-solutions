def bowling_score(frames):
    score = 0
    i = 0
    
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            if i + 1 < len(frames) and (frames[i+1].isdigit() or frames[i+1] == 'X'):
                if i + 2 < len(frames) and frames[i+2].isdigit():
                    score += int(frames[i+1:i+3])
                else:
                    score += 10
            i += 1
        elif '/' in frames[i:]:
            frame_points = int(frames[i+1])
            if i + 2 < len(frames):
                score += 10 + frame_points
            else:
                score += 10
            i += 3
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            score += int(temp)
    
    return score