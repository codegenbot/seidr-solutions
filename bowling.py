```
def bowling_score(frames):
    score = 0
    frames = frames.split("\n")
    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if frame[0] == "X":
                score += 30
            elif frame[1] == "/":
                score += 10 + (10 - int(frame[0]))
            else:
                score += int(frame[0]) + int(frame[1])
        elif len(frame) == 1:
            if i < 9 and int(frame) + int(frames[i + 1].split()[0]) >= 10:
                score += 10 + int(frame)
            else:
                score += int(frame) + int(frames[i + 1].split()[0])
    return score