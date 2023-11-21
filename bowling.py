def calculate_score(bowls):
    frames = []
    frame = []
    score = 0

    for bowl in bowls:
        if bowl == "X":
            score += 10
            frames.append([10])
            frame = []
        elif bowl == "/":
            score += 10 - frame[0]
            frames.append(frame + [10 - frame[0]])
            frame = []
        elif bowl == "-":
            frame.append(0)
        else:
            frame.append(int(bowl))

        if len(frame) == 2:
            frames.append(frame)
            frame = []

    for i, frame in enumerate(frames):
        score += sum(frame)

        if frame[0] == 10 and i + 1 < len(frames):
            score += sum(frames[i + 1][:2])
            if len(frame) == 1 and i + 2 < len(frames):
                score += frames[i + 2][0]
        elif sum(frame) == 10 and i + 1 < len(frames):
            score += frames[i + 1][0] if len(frames[i + 1]) >= 1 else frame[0]

        if i == 8 and len(frame) == 2 and sum(frame) == 10:
            score += frames[i + 1][0]

    return score