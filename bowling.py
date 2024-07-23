```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) - 1:
                score += int(frames[i])
            if i < len(frames) - 2:
                score += int(frames[i+1])
        elif frames[i] == '/':
            score += 10
            i += 2
            while i < len(frames) and not frames[i].isdigit():
                i += 1
            score += int(frames[i:i+1])
        else:
            if frames[i] == 'X' or frames[i] == '/':
                break
            frame_value = int(frames[i:i+1])
            score += frame_value
            i += 1
            if frame_value < 10:
                while i < len(frames) and not frames[i].isdigit():
                    i += 1
                score += int(frames[i:i+1])
    return score