def bowling_score(frames):
    frames = [frame.strip() for frame in frames.split("\n")]
    score = 0
    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if frame[0] == "X":
                if i < 9:
                    score += 30
                else:
                    score += 30 + int(list("X-" + frames[i + 1])[3])
            elif frame[1] == "/":
                score += 10 + (10 - int(frame[0]))
        elif len(frame) == 1:
            if i < 9 and int(frame) + int(frames[i+1].split()[0]) >= 10:
                score += 10 + int(frame)
            else:
                score += int(frame) + int(frames[i+1].split()[0] if i < 9 else 0)
    return score