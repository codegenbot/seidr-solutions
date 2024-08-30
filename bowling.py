def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            strike = True
        else:
            strike = False
        if strike:
            score += 10 + sum(int(x) for x in frames[i + 1 : i + 3].split("/")[0])
        elif int(frame[0]) + int(frame[-1]) >= 10:
            score += int(frame[0]) + int(frame[-1])
        else:
            score += int(frame[0]) + int(frame[-1])
    return score