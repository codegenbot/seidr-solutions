def bowling_score(frames):
    score = 0
    frames = [x.replace("/", " +") for x in frames.split("/")]
    for frame in frames:
        if "X" in frame:
            score += 10
            if len(frame) > 2:
                score += int("1" + frame[3].strip())
        elif "/" in frame:
            a, b = map(int, frame.replace("/", "+").split("+"))
            score += a + b
        else:
            score += sum(map(int, frame.split()))
    return score