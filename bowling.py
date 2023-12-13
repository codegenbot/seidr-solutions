def bowling(score):
    frames = []
    frame = []
    for char in score:
        if char == 'X':
            frame.append(10)
            frames.append(frame)
            frame = []
        elif char == '/':
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        elif char == '-':
            frame.append(0)
        else:
            frame.append(int(char))
            if len(frame) == 2:
                frames.append(frame)
                frame = []

    total_score = 0
    i = 0
    while i < len(frames):
        frame = frames[i]
        total_score += sum(frame)

        if frame[0] == 10:
            if i + 1 < len(frames):
                total_score += sum(frames[i + 1][:2])

                if frames[i + 1][0] == 10 and i + 2 < len(frames):
                    total_score += frames[i + 2][0]
        elif sum(frame) == 10 and i + 1 < len(frames):
            total_score += frames[i + 1][0]

        i += 1

    return total_score