def calculate_score(bowls):
    frames = []
    frame = []
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

    score = 0
    for i in range(10):
        frame = frames[i]
        score += sum(frame)
        if frame[0] == 10:
            if i + 1 < len(frames):
                score += frames[i + 1][0]
                if frames[i + 1][0] == 10:
                    if i + 2 < len(frames):
                        score += frames[i + 2][0]
            else:
                break
        elif sum(frame) == 10:
            if i + 1 < len(frames):
                score += frames[i + 1][0] if frames[i + 1][0] != 10 else 10
        if i == 9:
            score += sum(frames[9][:2])

    return score