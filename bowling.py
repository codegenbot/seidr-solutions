def bowling_score(frames):
    score = 0
    frame = []
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            frame.append(10)
        elif frames[i] == "/":
            frame.append(10 - int(frames[i + 1]))
        else:
            frame.append(int(frames[i : i + 2]))
    for f in frame:
        score += sum(f)
    return score