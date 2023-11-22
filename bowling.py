def bowling(score):
    frames = []
    frame = []
    for char in score:
        if char == "X":
            frame.append(10)
            frames.append(frame)
            frame = []
        elif char == "/":
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        elif char == "-":
            frame.append(0)
        else:
            frame.append(int(char))
            if len(frame) == 2:
                frames.append(frame)
                frame = []
    
    total_score = 0
    for i in range(len(frames)):
        frame = frames[i]
        total_score += sum(frame)
        
        if i < 9:
            if frame[0] == 10:
                if frames[i+1][0] == 10:
                    total_score += frames[i+1][0] + frames[i+2][0]
                else:
                    total_score += sum(frames[i+1])
            elif sum(frame) == 10:
                total_score += frames[i+1][0]
    
    return total_score