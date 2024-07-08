def bowling_score(frames):
    score = 0
    frames = [frame.strip() for frame in frames.split("\n")]
    next_frame = None
    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if frame[0] == "X":
                score += 10
                if i < 9:
                    next_frame = frames[i + 1]
            elif frame[1] == "/":
                score += 10 - int(frame[0])
        elif len(frame) == 1:
            if i < 9 and int(frame) + int(frames[i + 1].split()[0]) >= 10:
                score += 10
            else:
                score += int(frame)
    return score