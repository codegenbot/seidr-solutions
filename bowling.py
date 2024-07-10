```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if i + 1 < len(frames) and frames[i+1].isdigit():  
                if i + 2 < len(frames) and frames[i+2] == '/':  
                    score += 20 + int(frames[i:i+2])  
                else:
                    score += int(frames[i:i+2]) * 10
            else:  
                score += int(frames[i]) * 10
        elif frames[i] == 'X':  
            score += 30
        elif frames[i] == '/':  
            score += 10
        i += 1
    return score