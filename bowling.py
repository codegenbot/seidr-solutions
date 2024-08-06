def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif len(frame) > 1 and int(frame[0]) + int(frame[1]) == 10:
            score += 10 + int(frame[0])
        else:
            score += sum(map(int, frame))
        frame_count += 1
    return score