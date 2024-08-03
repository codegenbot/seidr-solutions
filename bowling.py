```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            frame_score = int(frames[i-1]) + 10 - int(frames[i+1])
            score += frame_score
        else:
            frame_score = int(frames[i:i+2])
            score += frame_score
    return score