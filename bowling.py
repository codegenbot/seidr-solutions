def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif frame[0] == "X":
            score += 10 + (10 - int(frame[1:]) if frame_count < 9 else 10)
        else:
            score += sum(map(int, frame))
    return score