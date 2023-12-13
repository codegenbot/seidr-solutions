def calculate_bowling_score(bowls):
    score = 0
    frame, ball = 1, 0
    frames = [[] for _ in range(10)]

    for bowl in bowls:
        if bowl == 'X':
            frames[frame-1].append(10)
            frame += 1
            ball = 0
        elif bowl == '/':
            frames[frame-1].append(10 - frames[frame-1][-1] + int(bowl))
            frame += 1
            ball = 1
        elif bowl == '-':
            frames[frame-1].append(0)
            ball += 1
        else:
            frames[frame-1].append(int(bowl))
            ball += 1

    for index, frame in enumerate(frames):
        if sum(frame) < 10:
            if index < 9:
                score += sum(frame)
    
    return score + sum(sum(frame) for frame in frames[:9]) + frames[9][0] + sum(frames[9][1:3])