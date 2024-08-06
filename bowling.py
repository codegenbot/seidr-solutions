def bowling_score(frames):
    score = 0
    frame_count = 1
    for frame in frames:
        if frame == "X":
            score += 30
            frame_count -= 1
        elif frame == "/":
            score += 10 + int(frames[frames.index(frame) - 1])
            frame_count -= 1
        else:
            score += sum(map(int, frame))
    return score