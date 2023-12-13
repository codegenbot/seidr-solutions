def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frames = [[] for _ in range(10)]
    
    prev_strike = False
    prev_spare = False
    
    for bowl in bowls:
        if frame > 10:
            break
        
        if bowl == 'X':
            frames[frame-1].append(10)
            if prev_strike:
                score += 10
            frame += 1
            ball = 0
            prev_strike = True
            prev_spare = False
        elif bowl == '/':
            frames[frame-1].append(10 - frames[frame-1][ball-1])
            if prev_spare:
                score += 10 - frames[frame-1][ball-1]
            frame += 1
            ball = 0
            prev_strike = False
            prev_spare = True
        elif bowl == '-':
            frames[frame-1].append(0)
            ball += 1
            prev_strike = False
            prev_spare = False
        else:
            frames[frame-1].append(int(bowl))
            ball += 1
            prev_strike = False
            prev_spare = False

    for index, frame in enumerate(frames):
        if len(frame) == 1:
            if index < 9:
                if frame[0] == 10:
                    score += frame[0] + sum(frames[index+1][:2])
                else:
                    score += frame[0]
            else:
                score += frame[0]
        elif len(frame) == 2:
            if index < 9:
                if sum(frame) == 10:
                    score += sum(frame) + frames[index+1][0]
                else:
                    score += sum(frame)
            else:
                score += sum(frame)

    return score