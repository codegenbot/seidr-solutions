def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if i + 1 < len(frames) and frames[i+1].isdigit():  
                if frames[i:i+2] == '10':
                    score += 10
                    i += 2
                else:
                    score += int(frames[i:i+2])
                    i += 2
            else: 
                if frames[i] == 'X':
                    score += 10
                    if i + 2 < len(frames) and frames[i+1] in ['X', '/']:
                        i += 1
                    else:
                        score += int(frames[i+1:i+3])
                elif frames[i] == '/':
                    score += 10
                    if i+2 < len(frames) and frames[i+1].isdigit():
                        score += int(frames[i+1])
                    else:
                        score += 10
            i += 1
        elif frames[i] == 'X': 
            if i + 1 < len(frames) and frames[i+1] in ['X', '/']:
                score += 30
                i += 1
            else:
                score += 10
                score += int(frames[i+1:i+3])
            i += 2
    return score