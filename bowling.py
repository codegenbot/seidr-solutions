```
def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i:]) >= 2 and frames[i:i+2].isdigit() and int(frames[i]) + int(frames[i+1]) <= 10:
                score += 10 - int(frames[i])
                frame_count -= 1
                i += 1
            else:
                score += int(frames[i])
        elif frames[i] == 'X':
            score += 10
            frame_count -= 1
        elif frames[i] == '-':
            continue
    return score