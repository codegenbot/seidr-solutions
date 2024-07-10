def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if i + 1 < len(frames) and frames[i+1].isdigit():  
                score += int(frames[i:i+2])
                i += 2
            else:  
                if frames[i] == 'X':
                    score += 10
                    if i+2 < len(frames) and frames[i+1] in ['X', '/']:
                        score += int(frames[i+2:i+4])
                    elif i+3 < len(frames) and frames[i+1].isdigit() and frames[i+2].isdigit():
                        score += int(frames[i+1:i+3])
                    else:
                        score += 10
                elif frames[i] == '/':
                    score += 10 + int(frames[i+1]) - 5  
                i += 2
        elif frames[i] == 'X':  
            if i+2 < len(frames) and frames[i+1] in ['X', '/']:
                score += 30
            else:
                score += 10
            i += 3
        elif frames[i] == 'X' and i+1 < len(frames) and frames[i+1] == 'X':
            score += 30
            i += 2
        i += 1
    return score