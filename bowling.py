```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(len(frames)):
        if frames[i] == "X":  
            score += 10
            if frame_num < 10:
                score += int(frames[i+1]) + int(frames[i+2])
        elif frames[i] == "/":  
            score += 10
            score += int(frames[i+1])
        else:  
            if frame_num < 9 and frames[i] != "X" and frames[i] != "/":
                score += int(frames[i]) + int(frames[i+1])
        frame_num += (frames[i] == "/" or frames[i] == "X")
    return score