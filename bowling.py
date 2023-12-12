def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frames = [[] for _ in range(10)]

    for bowl in bowls:
        if bowl == 'X':
            frames[frame - 1] += [10, 0]
            frame += 1
            ball = 0
        elif bowl == '/':
            frames[frame - 1].append(10 - frames[frame - 1][ball - 1])
            frame += 1
            ball = 0
        elif bowl == '-':
            frames[frame - 1].append(0)
            ball += 1
        else:
            frames[frame - 1].append(int(bowl))
            ball += 1

        if frame > 10:
            break

    for frame in frames:
        if frame[0] == 10:
            score += frame[0] + frame[1] + frame[2]
        else:
            score += sum(frame)

    return score