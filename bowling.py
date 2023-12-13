Below is the fixed code:
```
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
    
    for index, frame in enumerate(frames):
        if sum(frame) < 10 or len(frame) == 2:
            if index < 9:
                score += sum(frame) + frames[index+1][0] if sum(frame) < 10 else sum(frame) + frames[index+1][0] + frames[index+1][1]
            else:
                score += sum(frame)
    
    return score
```