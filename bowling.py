```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit() and i < len(frames) - 1 and frames[i+2].isdigit():
            frame_value = int(frames[i:i+3])
            score += frame_value
            i += 3
        elif frames[i].isdigit():
            frame_value = int(frames[i])
            score += frame_value
            i += 1
        elif frames[i] == '/':
            if i < len(frames) - 2 and frames[i+1:i+3].isdigit():
                score += 10
                i += 3
            else:
                return 0
    # handle the case where game ends before all 10 frames are played
    if i < len(frames):
        frame_value = int(frames[i])
        score += frame_value
    return score