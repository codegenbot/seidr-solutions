def bowling_score(frames):
    score = 0
    for frame in frames:
        if "/" in frame:
            num1, num2 = map(int, frame.split("/"))
            score += num1 + num2
        else:
            score += int(frame)
    return score