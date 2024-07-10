```
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
                    if i+2 < len(frames) and frames[i+1] in ['X', '/']:
                        while i < len(frames) - 2:
                            i += 1
                    score += 10 + int(frames[i+1:i+3]) 
                elif frames[i] == '/':
                    score += 10 + int(frames[i+1])
                i += 2
        elif frames[i] == 'X':  
            while i < len(frames) - 2:
                i += 1
            if i+2 < len(frames):
                score += 10 + int(frames[i:i+2]) 
            else:
                score += 10 
            i += 3
        i += 1
    return score