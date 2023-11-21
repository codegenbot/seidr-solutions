def calculate_score(bowls):
    frames = []
    frame = []
    score = 0

    for bowl in bowls:
        if bowl == "X":
            frame.append(10)
            if len(frame) == 2:
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

    for i, current_frame in enumerate(frames):
        score += sum(current_frame)

        if current_frame[0] == 10 and i + 1 < len(frames):
            score += frames[i + 1][0]
            if len(current_frame) == 1 and i + 2 < len(frames):
                score += frames[i + 2][0]
        elif sum(current_frame) == 10 and i + 1 < len(frames):
            score += frames[i + 1][0] if len(frames[i + 1]) >= 1 else current_frame[0]

        if i == 8 and len(frames[i]) > 2 and sum(current_frame[:-1]) == 10:
            score += frames[i + 1][0]

    return score