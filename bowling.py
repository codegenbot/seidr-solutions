def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            score += 10 + (10 - 1 if i < 9 else 0)
        elif frame[0] == "X":
            score += 10 + sum(int(x) for x in frames[i + 1 : i + 3].lstrip())
        else:
            strike, spare = int(frame[0]), int(frame[1])
            score += strike + spare
    return score