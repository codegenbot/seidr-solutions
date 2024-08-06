def bowling_score(frames):
    score = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif "X" in frame:
            if len(frame) == 2:
                score += 30
            else:
                score += 10 + int(list(frame)[1])
        elif frame.isdigit():
            score += int(frame)
        else:
            score += int(frame[:-1])
    return score