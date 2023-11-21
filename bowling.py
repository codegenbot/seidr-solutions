def calculate_score(bowls):
    frames = []
    frame = []
    score = 0
    
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
    
    for i in range(10):
        frame = frames[i]
        score += sum(frame)
        
        if frame[0] == 10:
            if i == 9:
                score += sum(frames[9])
            else:
                score += sum(frames[i + 1][:2])
                
                if frames[i + 1][0] == 10:
                    if i + 2 < len(frames):
                        score += frames[i + 2][0]
                        
        elif sum(frame) == 10 and i < 9:
            score += frames[i + 1][0]

    return score