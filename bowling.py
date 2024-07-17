```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            frame_score = int(frames[i])
            if frames[i+1] == '/':
                frame_score += 10 - int(frames[i])
            else:
                frame_score += int(frames[i+1])
        elif frames[i] == 'X':
            frame_score = 10
        elif frames[i:i+2] == 'XX':
            frame_score = 20
        score += frame_score
    return score