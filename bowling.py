def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif "X" in frame:
            score += 10 + (10 - int(frame.replace("X", "")))
            frame_num -= 1
        else:
            score += sum(map(int, frame))
    return score