def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if "-" in frame:
            strike = False
            spare = False
            for i in range(len(frame)):
                if frame[i] == "X":
                    strike = True
                elif frame[i].isdigit():
                    if i < len(frame) - 1 and int(frame[i]) + int(frame[i + 1]) > 10:
                        spare = True
                    else:
                        score += 10 - int(frame[i])
            if strike:
                score += 10
                roll += 2
            elif spare:
                score += 10
                roll += 1
        else:
            score += sum(map(int, frame))
            roll += len(frame)
    return score