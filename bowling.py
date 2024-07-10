```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        frame_score = 0
        if frames[i].isdigit():
            if i + 1 < len(frames) and frames[i+1].isdigit():
                frame_score = int(frames[i:i+2])
                i += 1
            else:
                frame_score = int(frames[i]) * 10
                i += 1
        elif frames[i] == 'X':
            if i+1 < len(frames) and (frames[i+1] in ['X', '/']):
                frame_score = 30
                i += 2
            else:
                if i+2 >= len(frames):
                    score += 10
                else:
                    score += 10 + int(frames[i+1:i+3])
                i += 3
        elif frames[i] == '/':
            frame_score = 10 + int(frames[i+1])
            i += 2
        if frame_score >= 10:
            score += frame_score
    return score