```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if i + 1 < len(frames) and frames[i+1].isdigit():
                current_frame_score = int(frames[i:i+2])
                score += current_frame_score
            else:
                current_frame_score = int(frames[i]) * 10
                score += current_frame_score
        elif frames[i] == 'X':
            if i+1 < len(frames) and frames[i+1] in ['X', '/']:
                current_frame_score = 30
                score += current_frame_score
            else:
                current_frame_score = 10 + int(frames[i+1:i+3])
                score += current_frame_score
        elif frames[i] == '/':
            current_frame_score = 10 + int(frames[i+1])
            score += current_frame_score
        i += 1
    return score