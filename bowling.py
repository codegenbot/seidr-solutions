def bowling_score(frames):
    score = 0
    frames = [x.replace("/", " +") for x in frames.split("/")]
    for frame in frames:
        if "X" in frame:
            score += 10
            if len(frame) > 2:
                score += int("1" + frame[3].strip())
        elif "/" in frame:
            scores = [int(x.strip()) for x in frame.replace("/", "+").split("+")]
            score += sum(scores)
        else:
            rolls = [int(x.strip()) for x in frame.split()]
            score += sum(rolls)
    return score