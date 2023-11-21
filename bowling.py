def calculate_score(bowls):
    frames = []
    frame = []
    score = 0

    for bowl in bowls:
        if bowl == "X":
            frame.append(10)
        elif bowl == "/":
            frame.append(10 - frame[0])
        elif bowl == "-":
            frame.append(0)
        else:
            frame.append(int(bowl))

        if len(frame) >= 2:
            frames.append(frame)
            frame = []

    for i in range(10):
        frame = frames[i]
        score += sum(frame)

        if sum(frame) == 10:
            if i + 1 < len(frames):
                score += frames[i + 1][0]

        if frame[0] == 10:
            if i + 1 < len(frames):
                score += sum(frames[i + 1])

                if i + 2 < len(frames) and len(frames[i + 1]) == 1:
                    score += frames[i + 2][0]

        if i == 9:
            score += sum(frames[9][:2])

    return score