def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) and frames[i] != '/':
                score += int(frames[i])
        elif '/' in frames[i:i+2]:
            frame_score = int(frames[i]) + int(frames[i+1])
            score += frame_score
            i += 1
        else:
            frame_score = int(frames[i]) + int(frames[i+1]) + int(frames[i+2])
            score += frame_score
            i += 3
    return score