def calculate_score(bowls):
    frames = []
    frame = []
    for bowl in bowls:
        frame.append(bowl)
        if bowl == 'X':
            frames.append(frame)
            frame = []
        elif bowl == '/':
            frames.append(frame)
            frame = []
        elif len(frame) >= 2:
            frames.append(frame)
            frame = []

    score = 0
    for i in range(10):
        frame = frames[i]
        score += sum(frame)
        if frame[0] == 'X':
            if i + 1 < len(frames):
                score += sum(frames[i+1][:2])
                if frames[i+1][0] == 'X' or sum(frames[i+1]) == '/':
                    if i + 2 < len(frames):
                        score += frames[i+2][0]
            else:
                break
        elif sum(frame) == '/':
            if i + 1 < len(frames):
                score += frames[i+1][0]
        if i == 9 and len(frames) >= 10:
            score += sum(frames[9])

    return score