def bowling_score(frames):
    score = 0
    for i in range(10):
        frame = frames[i * 2 : i * 2 + 2]
        if "/" in frame:
            first_roll = int(frame[: frame.index("/")])
            second_roll = 10 - first_roll
            if i < 9 and frames[18 - 2 * i].index("/") != 0:
                score += min(first_roll, 10) + second_roll
            else:
                score += first_roll + second_roll
        else:
            score += int(frame)
    return score