def calculate_bowling_score(bowls):
    score = 0
    frame, ball = 1, 0
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
            ball = 1
        elif bowl == '-':
            frames[frame-1].append(0)
            ball += 1
        else:
            frames[frame-1].append(int(bowl))
            ball += 1

    for index in range(9):
        frame = frames[index]
        if sum(frame) == 10:
            if len(frame) == 1:
                if frames[index+1]:
                    score += sum(frame) + sum(frames[index+1][:2])
            else:
                score += sum(frame) + frames[index+1][0]
        else:
            score += sum(frame)

    return score