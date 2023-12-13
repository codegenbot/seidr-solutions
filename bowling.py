def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frames = [[] for _ in range(10)]
    prev_frame = []

    for bowl in bowls:
        if frame > 10:
            break

        if bowl == 'X':
            frames[frame-1].append(10)
            if frame > 1 and len(prev_frame) > 0 and len(prev_frame) < 2:
                score += 10 + sum(frames[frame-1])
            elif frame > 1 and len(prev_frame) > 1:
                score += 10 + frames[frame-1][0] + frames[frame-1][1]
            frame += 1
            ball = 0
            prev_frame = frames[frame-2]
        elif bowl == '/':
            frames[frame-1].append(10 - frames[frame-1][ball-1])
            score += 10 + frames[frame-1][ball]
            frame += 1
            ball = 0
            prev_frame = frames[frame-2]
        elif bowl == '-':
            frames[frame-1].append(0)
            ball += 1
        else:
            frames[frame-1].append(int(bowl))
            ball += 1

    for index, frame in enumerate(frames):
        if len(frame) < 3:
            if index < 9:
                if sum(frame) == 10 and len(frame) == 2:
                    score += sum(frame) + frames[index+1][0]
                else:
                    score += sum(frame)
            elif index == 9 and len(frame) == 3:
                score += sum(frame)

    return score