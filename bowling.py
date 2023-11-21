def bowling_score(bowls):
    frames = []
    frame = []
    for bowl in bowls:
        if bowl == 'X':
            frame.append(10)
            frames.append(frame)
            frame = []
        elif bowl == '/':
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        elif bowl == '-':
            frame.append(0)
        else:
            frame.append(int(bowl))
            if len(frame) == 2:
                frames.append(frame)
                frame = []
    
    score = 0
    for i in range(len(frames)):
        frame = frames[i]
        score += sum(frame)
        if i < len(frames) - 1:
            if frame[0] == 10:
                if frames[i+1][0] == 10:
                    score += frames[i+1][0] + frames[i+2][0]
                else:
                    score += sum(frames[i+1])
            elif sum(frame) >= 10:
                score += frames[i+1][0] + (frames[i+2][0] if len(frames[i+2]) > 0 else 0)
    
    return score

bowls = input().strip()
print(bowling_score(bowls))