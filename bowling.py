def bowling_score(frames):
    score = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif frame[0] == "X":
            score += 30
        else:
            score += int(frame[0]) * 2 + (int(frame[-1]) if frame[-1].isdigit() else 10)
    return score