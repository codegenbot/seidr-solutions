def calculate_score(bowls):
    frames = []
    frame = []
    for bowl in bowls:
        if bowl == "X":
            frame.append(10)
            frames.append(frame)
            frame = []
        elif bowl == "/":
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        elif bowl == "-":
            frame.append(0)
        else:
            frame.append(int(bowl))
            
        if len(frame) == 2:
            frames.append(frame)
            frame = []

    score = 0
    for i, frame in enumerate(frames):
        score += sum(frame)

        if frame[0] == 10 and i + 1 < len(frames):
            score += frames[i + 1][0]
            if len(frame) == 1 and i + 2 < len(frames):
                score += frames[i + 2][0]
        elif sum(frame) == 10 and i + 1 < len(frames):
            score += frames[i + 1][0]

    if len(frames) >= 9:
        last_frame = frames[9]
        if len(last_frame) == 2 and sum(last_frame) == 10:
            score += frames[10][0]
        elif len(last_frame) == 3:
            score += sum(last_frame)

    return score