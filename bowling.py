def bowling_score(frames):
    score = 0
    roll = 0
    for i, frame in enumerate(frames.split("/")):
        if frame == "X":
            if i < 9:
                score += 30
            else:
                score += 10 + int(roll) * 2
            roll = 0
        elif frame == "":
            if i < 9:
                score += 10 + max(int(roll), 1) * 2
            else:
                score += 10
            roll = 0
        else:
            if len(frame) > 1 and int(frame[1:]) > 0:
                if i < 9:
                    score += 10 + int(frame[0]) + int(frame[1])
                    roll = frame[1:]
                else:
                    score += 10 + max(int(roll), int(frame[0])) * 2
            else:
                if i < 9:
                    score += int(frame) + int(roll)
                    roll = "0"
                else:
                    score += 10 + max(int(roll), int(frame)) * 2
    return score