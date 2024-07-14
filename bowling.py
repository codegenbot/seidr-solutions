def bowling_score(frames):
    score = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif frame[0] == "X":
            score += 30
        else:
            strike = False
            spare = False
            if frame[0] == "5":
                strike = True
            elif sum(map(int, frame)) < 10:
                spare = True
            if strike:
                score += 10 + int(frame[1])
            elif spare:
                score += 10 + max(map(int, frame))
            else:
                score += sum(map(int, frame))
    return score