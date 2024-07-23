```
def bowling_score(frames):
    frames = frames.replace('/', ' /').split()
    score = 0
    current_roll = 0

    for frame in range(len(frames)):
        if len(frames[frame]) == 1:  
            score += 10
            current_roll = 0
        elif frames[frame] == "X":  
            score += 10
            current_roll = 0
        else:
            roll = int(frames[frame])
            score += roll
            if frame < len(frames) - 1 and frames[frame + 1].isdigit():  
                current_roll = roll

    return score