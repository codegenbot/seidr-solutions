```Python
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":  
            score += 10 + int(frames[i+1]) + int(frames[i+2])
            i += 3
        elif frames[i] == "/":  
            if i + 2 < len(frames) and frames[i+1].isdigit():
                score += 10 + int(frames[i+1])
            else:
                score += 10
            i += 2
        else:  
            frame_score = int(frames[i])
            if i < 9 and frames[i + 2].isdigit():  
                score += frame_score + int(frames[i + 1]) + int(frames[i + 2])
                i += 3
            else:  
                score += frame_score + int(frames[i+1])
                i += 2
    return score