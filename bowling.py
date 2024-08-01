```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        else:
            frame_score = 0
            for j in range(0, 2):
                if frames[i+j].isdigit():
                    frame_score += int(frames[i+j])
                elif frames[i+j] == 'X':
                    if j == 0:
                        frame_score += 10 + int(frames[i+1])
                    else:
                        frame_score += 10
                else:
                    frame_score += 10
            score += frame_score
    return score