```
def bowling_score(frames):
    score = 0
    frames = frames.split("\n")
    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if frame[0] == "X":
                score += 30
                score += bowling_score(frames[i+1:i+3]) if i < 9 else 0
            elif frame[1] == "/":
                score += 10 + int(frame[0])
                score += bowling_score([frames[i+1]]) if i < 9 else 0
        elif len(frame) == 1:
            score += int(frame)
    return score