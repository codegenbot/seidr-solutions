def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frames = [[] for _ in range(10)]

    for bowl in bowls:
        if bowl == 'X':
            frames[frame-1].append(10)
            frame += 1
            ball = 0
        elif bowl == '/':
            frames[frame-1].append(10 - frames[frame-1][ball-1])
            frame += 1
            ball = 0
        elif bowl == '-':
            frames[frame-1].append(0)
            ball += 1
        else:
            frames[frame-1].append(int(bowl))
            ball += 1

        if frame > 10:
            break

    for index, frame in enumerate(frames):
        if len(frame) < 3:
            if index < 9:
                if len(frame) == 2 and frame[0] + frame[1] == 10:
                    score += sum(frame) + frames[index+1][0]
                else:
                    score += sum(frame)
            else:
                score += sum(frame)

    if len(frames[9]) == 3:
        score += frames[9][2]

    return score