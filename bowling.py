def calculate_score(bowls):
    frames = []
    frame = []
    for bowl in bowls:
        frames.append(frame)
        if bowl == "X":
            frame.append(10)
            frame = []
        elif bowl == "/":
            frame.append(10 - frame[0])
            frame = []
        elif bowl == "-":
            frame.append(0)
        else:
            frame.append(int(bowl))
            if len(frame) >= 2:
                frame = []

    score = 0
    for i in range(min(10, len(frames))):
        frame = frames[i]
        score += sum(frame)
        if frame[0] == 10:
            if i + 1 < len(frames):
                score += sum(frames[i + 1][:2])
                if frames[i + 1][0] == 10 or sum(frames[i + 1][:-1]) == 10:
                    if i + 2 < len(frames):
                        score += frames[i + 2][0]
        elif sum(frame) == 10:
            if i + 1 < len(frames):
                score += sum(frames[i + 1])
    return score