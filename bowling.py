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
        if frame_num < 10:
            if len(frame) > 1:
                score += int(frame[0])
            if len(frame) == 2 and int(frame[0]) + int(frame[1]) > 10:
                score += int(frame[1])
        frame_num += 1
    return score