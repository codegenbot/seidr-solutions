def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames:
        if "/" in frame:
            first_roll = int(frame.split("/")[0])
            second_roll = int(frame.split("/")[1].lstrip("X"))
            if "X" == frame[2:]:
                score += 10 + (first_roll + second_roll)
            elif "X" in frame:
                score += 10 + first_roll
            else:
                score += first_roll + second_roll
        else:
            if "X" == frame:
                score += 10
            else:
                score += int(frame) + roll
                roll = 0
                if len(frames[frames.index(frame) + 1 :]) < 2:
                    roll = int(frame)
        if len(frames) > frames.index(frame):
            if frames[frames.index(frame) + 1][0] == "X":
                roll = 10
    return score