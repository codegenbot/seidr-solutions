def bowling_score(frames):
    score = 0
    frames = frames.split('/')
    for frame in frames:
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            rolls = list(map(int, frame))
            if sum(rolls) == 10:
                score += 10
            else:
                score += sum(rolls)
        else:
            rolls = list(map(int, frame))
            if rolls[0] + rolls[1] == 10:
                score += 10 + rolls[2]
            elif rolls[1] + rolls[2] == 10:
                score += 10 + rolls[0]
            else:
                score += sum(rolls)
    return score