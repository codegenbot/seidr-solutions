def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if frame == "X":
            if i < 9:
                score += 30
            else:
                score += 10 + (10 - int(frames[i + 1])) * 2
        elif frame == "":
            if i < 9:
                score += 10 + (10 - int(frames[i - 1])) * 2
            else:
                score += 10
        elif len(frame) > 1 and frame[0] == "X":
            score += 30
            if i < 8:
                score += int(frame[1:])
            elif i == 9:
                score += int(frame[1:]) * 2
        else:
            score += int(frame)
    return score