def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
            roll += 2
        elif len(frame) == 2:
            score += int(frame[0]) * 10 + 10 - int(frame[0])
            roll += 2
        else:
            if int(frame[0]) == 10:
                score += 10 + (int(frame[1:]) + 10) * 2
                roll += 3
            else:
                score += int(frame[0]) * 10
                if int(frame[1:]) < 10:
                    score += int(frame[1:])
                    roll += 2
                elif int(frame[1:]) == 10:
                    score += 10 + 10
                    roll += 3
                else:
                    score += 10 + (int(frame[1:]) - 10) * 2
                    roll += 3
    return score