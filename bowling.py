```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + (10 if i + 1 < len(frames) and frames[i+1] == '/' else int(frames[i+1]))
        elif frames[i] == '/':
            score += 10 - int(frames[i-1].strip())
        else:
            frame_count += 1
            score += int(frames[i:i+2].replace('/', ''))
    return score