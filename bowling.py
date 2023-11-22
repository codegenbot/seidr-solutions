def bowling(score):
    frames = []
    frame = []
    for s in score:
        if s == "X":
            frame.append(10)
            frames.append(frame)
            frame = []
        elif s == "/":
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        else:
            frame.append(int(s))
            if len(frame) == 2:
                frames.append(frame)
                frame = []
    if len(frame) == 1:
        frames.append(frame)
        
    total_score = 0
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

score = input()
print(bowling(score))