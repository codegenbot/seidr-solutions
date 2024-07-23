```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) - 1 and frames[i].isdigit():
                score += int(frames[i])
            elif i < len(frames) - 2:
                score += 10 + int(frames[i+1]) + int(frames[i+2])
        elif frames[i] == '/':
            score += 10
            i += 2
            if i < len(frames):
                score += int(frames[i])
        elif frames[i].isdigit() and i < len(frames) - 1 and frames[i+1].isdigit():
            frame_value = int(frames[i:i+2])
            score += frame_value
            i += 2
            if frame_value == 10:
                continue
        elif frames[i].isdigit():
            frame_value = int(frames[i])
            score += frame_value
            i += 1
    return score