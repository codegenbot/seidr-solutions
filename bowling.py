def bowling_score(frames):
    score = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
        elif len(frame) > 1 and int(frame[0]) == 10:
            score += 10 + sum(map(int, frame[1:]))
        else:
            first_roll = int(frame[0])
            if first_roll < 10:
                score += first_roll + sum(map(int, frame[1:]))
            elif len(frame) > 1 and int(frame[1]) == 0:
                score += 20
            else:
                score += 10 + sum(map(int, frame[1:]))
    return score