```
def bowling_score(frames):
    score = 0
    for frame in frames.split("/"):
        frame = int(frame)
        if frame == 10:
            score += 10 + bowling_score(str(11) + "/" + str(1)) if len(frames.split("/")[frames.index(str(frame))+1:]) >= 2 else 10
        elif str(frame)[0] != '0':
            score += 10
        else:
            score += frame
    return score