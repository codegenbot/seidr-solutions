```
def bowling_score(frames):
    score = 0
    frame_number = 1
    frames = list(map(int, frames.replace('-', '0').split('/')))
    
    for i in range(0, len(frames), 2):
        if frames[i] + frames[i+1] == 10:
            if i < 18 and (i+2 >= len(frames) or frames[i+2] != 0):
                score += 15
            else:
                score += 10
        elif frames[i] == 10:
            score += 10 + frames[i+1]
        else:
            score += frames[i] + frames[i+1]
        
        if frame_number < 10 and (frames[i]+frames[i+1]) != 10:
            while i < len(frames)-1 and frames[i+2:][0] == 0:
                i += 1
                frame_number += 1
        
    return score