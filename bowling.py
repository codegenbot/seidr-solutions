```
def bowling_score(frames):
    frames = frames.replace('/', ' /').split()
    score = 0
    current_roll1 = 0
    current_roll2 = 0

    for frame in range(len(frames)):
        if len(frames[frame]) == 1:  
            score += 10
            current_roll1 = 0
            current_roll2 = 0
        elif frames[frame] == "X":  
            score += 10
            current_roll1 = 0
            current_roll2 = 0
        else:
            roll1 = int(frames[frame][0])
            if len(frames[frame]) > 1 and frames[frame][1] == '/':
                roll2 = 10 - roll1
                score += 10
            elif len(frames[frame]) > 1 and frames[frame][1].isdigit():
                roll2 = int(frames[frame][1:])
                current_roll1 = roll1 + roll2
            else:
                roll2 = 0

    return score