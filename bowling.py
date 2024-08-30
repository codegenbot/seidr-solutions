```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split("/"):
        if len(frame) == 1:
            strike = True
            spare = False
        elif len(frame) > 1 and "X" in frame:
            strike = True
            spare = False
        else:
            roll1, roll2 = map(int, frame.split('-'))
            score += roll1 + roll2
            frame_num += 1

    return score