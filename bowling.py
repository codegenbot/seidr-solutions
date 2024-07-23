```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames:
        if frame == "X":
            score += 10
            roll += 1
        elif frame == "10/":
            score += 10
            roll += 2
        else:
            if roll == 1:
                score += 10
            else:
                score += int(frame.split("/")[0]) + int(frame.split("/")[1])
            roll = 0
    return score