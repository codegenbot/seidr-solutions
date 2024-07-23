def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit() and i < len(frames) - 1 and frames[i+2].isdigit():
            frame_value = int(frames[i:i+3])
            score += frame_value
            i += 3
        elif frames[i].isdigit():
            if i < len(frames) - 1:
                if frames[i+1] == '/':
                    score += 10
                    i += 2
                else:
                    frame_value = int(frames[i])
                    score += frame_value
                    i += 1
            else:
                return score
        elif frames[i] == '/':
            score += 10
            i += 2
    return score