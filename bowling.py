```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            frame_value = 10 + int(frames[i+1]) + int(frames[i+2])
            score += frame_value
            i += 3
        elif frames[i].isdigit():
            if len(frames[i:i+2]) > 0 and frames[i].isdigit() and frames[i+1] == '/':
                frame_value = 10 + int(frames[i])
                score += frame_value
                i += 2
            else:
                frame_value = int(frames[i])
                if len(frames[i:i+2]) > 0 and frames[i+1].isdigit():
                    score += frame_value + int(frames[i+1])
                    i += 2
                else:
                    score += frame_value
                    i += 1
        elif frames[i] == '/':
            if i < len(frames) - 2 and frames[i+1:i+3].isdigit():
                score += 10 + int(frames[i+1]) + int(frames[i+2])
                i += 3
            else:
                return 0
    return score