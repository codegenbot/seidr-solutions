def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif len(frame) > 1:
            strike = (int(frame[0]) + int(frame[1])) == 10
            spare = int(frame[0]) + int(frame[1]) < 10
            if strike:
                score += 10 + np.sum([10 for _ in range(2, 11)])
            elif spare:
                score += 10 + int(frame[0]) + int(frame[1])
            else:
                score += int(frame[0]) + int(frame[1])
        roll += 1
    return score