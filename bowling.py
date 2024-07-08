def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            if frame_num < 10:
                score += 30
            else:
                score += 30 + int(frames[i-1])
            frame_num += 1
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
            frame_num += 1
        else:
            if len(frames) > i+1 and frames[i+1] == 'X':
                score += 10 + int(frames[i])
            else:
                score += int(frames[i]) + int(frames[i+1])
            frame_num += 1
    return score