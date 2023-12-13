def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frames = [[] for _ in range(10)]

    for bowl in bowls:
        if frame > 10:
            break

        if bowl == 'X':
            frames[frame-1].append(10)
            frame += 1
            ball = 0
        elif bowl == '/':
            frames[frame-1].append(10 - frames[frame-1][-1])
            frame += 1
            ball = 0
        elif bowl == '-':
            frames[frame-1].append(0)
            ball += 1
        else:
            frames[frame-1].append(int(bowl))
            ball += 1

    for index, frame in enumerate(frames):
        if len(frame) >= 2:
            score += sum(frame)
            if index < 9:
                if frame[0] == 10:
                    if len(frames[index + 1]) >= 2:
                        score += sum(frames[index + 1][:2])
                    else:
                        score += frames[index + 1][0]
                        if len(frames[index + 1]) == 1 and index < 8:
                            score += frames[index + 2][0]
                elif sum(frame) == 10:
                    if len(frames[index + 1]) >= 1:
                        score += frames[index + 1][0]
    return score