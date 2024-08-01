def bowling_score(frames):
    score = 0
    rolls = frames.split("/")
    for i, frame in enumerate(rolls):
        if frame == "X":
            if i < 9:
                score += 30
            else:
                score += 10
        elif len(frame) > 1 and frame[0] == "X":
            if i < 8:
                score += 20 + int(rolls[i + 1])
            else:
                score += 10 + int(rolls[-1])
        else:
            score += sum(int(x) for x in frame)
    return score