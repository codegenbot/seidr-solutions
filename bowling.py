```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) == 1:
                score += int(frames[i])
            elif len(frames[i]) == 2:
                score += int(frames[i])
        else:
            if frames[i] == 'X':
                score += 10
            elif frames[i] == '/':
                continue
            elif frames[i].startswith('X'):
                score += 10
                frame_count -= 1
    return score