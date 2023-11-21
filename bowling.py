def calculate_score(bowls):
    frames = []
    frame = []
    for bowl in bowls:
        if bowl == "X":
            frame.append(10)
            frames.append(frame)
            frame = []
        elif bowl == "/":
            frame.append(10 - sum(frame))
            frames.append(frame)
            frame = []
        elif bowl == "-":
            frame.append(0)
        else:
            frame.append(int(bowl))

        if len(frames) == 10:
            break

        if len(frame) == 2 or bowl == "X":
            frames.append(frame)
            frame = []

    score = 0
    for i, frame in enumerate(frames):
        score += sum(frame)

        if i < 9:
            if frame[0] == 10:
                if len(frames[i + 1]) > 0:
                    score += frames[i + 1][0]
                if len(frames[i + 1]) > 1:
                    score += frames[i + 1][1]
            elif sum(frame) == 10 and len(frames[i + 1]) > 0:
                score += frames[i + 1][0]

    return score