def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
            roll += 2
        else:
            if int(frame[0]) < 10 and str(int(frame[0])) + "/" not in frames[:roll]:
                score += int(frame[0]) * 2
                roll += 1
            else:
                if int(frame[0]) == 10:
                    score += 10 + (int(frame[1:]) or 10) * 2
                    roll += 2
                elif str(int(frame[0])) + "/" not in frames[:roll]:
                    score += sum(map(int, frame))
                    roll += 1
    return score