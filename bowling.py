def bowling(score):
    total_score = 0
    frames = []
    frame = []
    for char in score:
        if char == 'X':
            frame.append(10)
            frames.append(frame)
            frame = []
        elif char == '/':
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        elif char == '-':
            frame.append(0)
        else:
            frame.append(int(char))
            
        if len(frame) == 2 or char == 'X':
            frames.append(frame)
            frame = []
            
    for i in range(10):
        if frames[i][0] == 10:
            total_score += 10 + frames[i+1][0] + frames[i+1][1]
            if frames[i+1][0] == 10:
                total_score += frames[i+2][0]
        elif frames[i][0] + frames[i][1] == 10:
            total_score += 10 + frames[i+1][0]
        else:
            total_score += frames[i][0] + frames[i][1]
            
    return total_score