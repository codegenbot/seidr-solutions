```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.replace('/', ' ').replace('X', '10').split()]
    for i in range(0, 10):
        if len(roll[i*2:i*2+2]) == 1:
            score += 10 + (10 - int(roll[i*2])) * 2
        else:
            frame_score = sum(roll[i*2:i*2+2])
            if frame_score == 10:
                score += 10
            else:
                score += frame_score
    return score