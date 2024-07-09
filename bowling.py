```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if i + 1 < len(frames) and frames[i+1] == '/':
                score += 10 + 10
            else:
                score += 10
        elif frames[i] == '/':
            score += 10 - int(frames[i-2])
        else:
            roll = int(frames[i:i+2].replace('/', ''))
            if roll >= 10:
                score += 10 + bowling_score(frames[i+2:])
            else:
                score += roll
    return score