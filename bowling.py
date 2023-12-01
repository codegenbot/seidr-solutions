def bowling(score):
    frames = []
    frame = []
    for i in range(len(score)):
        if score[i] == 'X':
            frame.append(10)
            frames.append(frame)
            frame = []
        elif score[i] == '/':
            frame.append(10 - int(score[i-1]))
            frames.append(frame)
            frame = []
        elif score[i] == '-':
            frame.append(0)
        else:
            frame.append(int(score[i]))

        if len(frame) == 2 or score[i] == 'X':
            frames.append(frame)
            frame = []

    total_score = 0
    for i in range(10):
        if frames[i][0] == 10:
            total_score += 10 + sum(frames[i+1][:2])
            if frames[i+1][0] == 10:
                total_score += frames[i+2][0]
        elif sum(frames[i]) == 10:
            total_score += 10 + frames[i+1][0]
        else:
            total_score += sum(frames[i])

    return total_score