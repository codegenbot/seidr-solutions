```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit() and i < len(frames) - 1 and frames[i+2].isdigit():
            frame_value = int(frames[i:i+3])
            if frame_value == 10: # strike
                score += 10 + int(frames[i+3:i+5])
                i += 3
            elif i < len(frames) - 2 and frames[i+1:i+3].isdigit(): # spare
                score += 10
                i += 3
            else:
                score += frame_value
                i += 3
        elif frames[i].isdigit():
            score += int(frames[i])
            i += 1
        elif frames[i] == '/':
            if i < len(frames) - 2 and frames[i+1:i+3].isdigit():
                score += 10
                i += 3
            else:
                return 0
    return score