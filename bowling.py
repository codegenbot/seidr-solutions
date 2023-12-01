def bowling(score):
    frames = []
    frame = []
    for i in range(len(score)):
        if score[i] == 'X':
            frame.append(10)
            frames.append(frame)
            frame = []
        elif score[i] == '/':
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        elif score[i] == '-':
            frame.append(0)
        else:
            frame.append(int(score[i]))
            if len(frame) == 2:
                frames.append(frame)
                frame = []
    
    total_score = 0
    for i in range(len(frames)):
        frame = frames[i]
        if i < 9:
            if frame[0] == 10:
                total_score += 10 + frames[i+1][0] + frames[i+1][1]
                if frames[i+1][0] == 10 and i+2 < len(frames):
                    total_score += frames[i+2][0]
            elif sum(frame) == 10:
                total_score += 10 + frames[i+1][0]
        total_score += sum(frame)
    
    return total_score