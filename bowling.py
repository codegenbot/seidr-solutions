def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames:
        if "/" in frame:
            first_roll = int(frame.split("/")[0])
            second_roll = (
                int(frame.split("/")[1].split("-")[0])
                if "-" in frame
                else 10 - first_roll
            )
            if first_roll == 10:
                score += 10 + second_roll
                roll += 2
            elif first_roll + second_roll >= 10:
                score += first_roll + second_roll
                roll += 2
            else:
                score += first_roll
                roll += 1
        else:
            if int(frame) == 10:
                score += 10
                roll += 2
            elif int(frame) < 10:
                score += int(frame)
                roll += 1
    while roll < 10:
        if frames[roll - 1].split("/")[0] != "X":
            first_roll = int(frames[roll - 1].split("/")[0])
            second_roll = 10 - first_roll
            score += second_roll
            roll += 1
        else:
            score += 10
            roll += 1
    return score