def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames:
        if "/" in frame:
            first_roll = int(frame.split("/")[0])
            second_roll = 10 - first_roll
            if "X" in frame or str(second_roll) not in frame:
                score += 10 + second_roll
            else:
                score += 10 + first_roll
        elif frame == "X":
            score += 10
            roll = 1
        elif frame == "XX":
            score += 20
            roll = 2
        elif frame == "XXX":
            score += 30
            roll = 3
        else:
            if roll > 0:
                score += int(frame)
                roll -= 1
            else:
                score += int(frame)
    return score