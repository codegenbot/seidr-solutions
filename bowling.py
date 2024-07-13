```
def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 30
            frame_count -= 1
            if frame_count > 0:
                score += int(frames[i+1])
        elif frames[i] == '/':
            score += 10
            frame_count -= 1
            if frame_count > 0:
                score += int(frames[i+1]) + int(frames[i+2])
        else:
            score += int(frames[i])
    return score