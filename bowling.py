def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2 and int(frame[0]) + int(frame[1]) <= 10:
            score += int(frame[0]) + int(frame[1])
        else:
            score += 10
        if frame_num < 9:  
            if len(frame) > 1 and (int(frame[0]) + int(frame[1])) == 10:
                score += 10
                frame_num += 1
            elif len(frame) == 1 and int(frame) == 10:
                score += 10
                frame_num += 2
        frame_num += 1
    return score