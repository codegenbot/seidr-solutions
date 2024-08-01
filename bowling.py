def bowling_score(frames):
    score = 0
    frame = []
    for i in frames:
        if i != "/":
            frame.append(int(i))
        else:
            if sum(frame) < 10:
                score += 10 - sum(frame)
            else:
                score += sum(frame)
            frame = []
    if sum(frame) > 0:
        score += sum(frame)
    return score