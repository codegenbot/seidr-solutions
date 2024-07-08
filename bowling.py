def bowling_score(frames):
    score = 0
    frames = frames.split("\n")
    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if frame[0] == "X":
                score += 30
                if i < 9:
                    score += bowling_score(frames[i + 1 : i + 3])
            elif frame[1] == "/":
                score += 10 + int(frame[0])
                if len(frames[i + 1]) == 2 and frames[i + 1][0] == "X":
                    score += bowling_score(frames[i + 2 : i + 4])
                else:
                    score += int(frames[i + 1].split()[0])
        elif len(frame) == 1:
            score += int(frame)
    return score