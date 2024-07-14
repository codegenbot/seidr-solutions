def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif int(frame) < 10:
            score += int(frame)
        else:
            if frame_count < 9:
                score += 10 + int(frame[1:])
            else:
                score += 10 + int(frame[1:])
    return score