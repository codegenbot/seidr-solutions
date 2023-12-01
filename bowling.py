def bowling(score_string):
    score = 0
    frames = score_string.split("/")
    for frame in frames:
        if frame == "X":
            score += 10
        else:
            score += int(frame[0])
            if len(frame) == 2:
                score += int(frame[1])
    return score