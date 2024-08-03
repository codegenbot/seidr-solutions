def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            strike = int(frame[0]) * 10 + 10
            score += strike
            while frame_num < 10 and "X" in frames[frame_num * 2 : frame_num * 2 + 2]:
                frame_num += 1
        else:
            spare = int(frame[0]) + int(frame[1])
            score += spare
    return score