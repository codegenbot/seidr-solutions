def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) > 1:
            if "X" in frame:
                score += 10 + 10 * (roll // 2)
                roll = 0
            else:
                first_roll = int(frame[0])
                second_roll = 10 - first_roll
                score += (
                    10
                    + min(first_roll, second_roll) * (roll // 2)
                    + max(first_roll, second_roll)
                )
                roll = 0
        elif len(frame) == 1 and frame == "X":
            score += 10
            roll = 0
        else:
            for p in frame:
                if p.isdigit():
                    score += int(p)
            roll += sum(map(int, frame))
    return score