def calculate_score(bowls):
    frames = []
    frame = []
    prev_spare = False

    for bowl in bowls:
        if bowl == "X":
            frame.append(10)
        elif bowl == "/":
            frame.append(10)
            prev_spare = True
        elif bowl == "-":
            frame.append(0)
        else:
            frame.append(int(bowl))
            prev_spare = False

        if len(frame) >= 2:
            frames.append(frame)
            frame = []

    score = 0
    for i in range(10):
        frame = frames[i]
        score += sum(frame)

        if frame[0] == 10:
            if i + 1 < len(frames):
                score += frames[i + 1][0]
                if frames[i + 1][0] == 10 and i + 2 < len(frames):
                    score += frames[i + 2][0]
        elif sum(frame) == 10:
            if i + 1 < len(frames):
                score += frames[i + 1][0] if not prev_spare else frame[0]

        if i == 9 and len(frame) == 3:
            score += frame[2]

    return score