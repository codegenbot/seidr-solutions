```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames):
                score += int(frames[i])
            else:
                break
        elif frames[i] == '/':
            frame_value = int(frames[i+1:i+3])
            score += 10
            score += frame_value
            i += 3
        elif frames[i].isdigit() and i < len(frames) - 1 and frames[i+2].isdigit():
            frame_value = int(frames[i:i+3])
            if frame_value == 10:
                score += 10
                i += 3
            else:
                score += frame_value
                i += 3
        elif frames[i].isdigit():
            frame_value = int(frames[i])
            score += frame_value
            i += 1
    return score