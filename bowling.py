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
    for i in range(10):
        frame = frames[i]
        score += sum(frame)
        if sum(frame) == 10:
            if i + 1 < len(frames):
                score += frames[i + 1][0]
        if frame[0] == 10:
            if i + 1 < len(frames):
                score += sum(frames[i + 1][:2])
                if frames[i + 1][0] == 10 or sum(frames[i + 1]) == 10:
                    if i + 2 < len(frames):
                        score += frames[i + 2][0]
        if i == 9:
            score += sum(frames[9])

    return score


print(calculate_score("63-211616333X9-52-4"))