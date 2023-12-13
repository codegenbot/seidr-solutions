```python
def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    ball = 0
    frames = [[] for _ in range(10)]
    
    for bowl in bowls:
        if frame > 10:
            break

        if bowl == 'X':
            frames[frame-1].append(10)
            frame += 1
            ball = 0
        elif bowl == '/':
            frames[frame-1].append(10 - frames[frame-1][ball-1])
            frame += 1
            ball = 0
        elif bowl == '-':
            frames[frame-1].append(0)
        else:
            frames[frame-1].append(int(bowl))

        ball += 1
        if ball > 1 or bowl == 'X':
            ball = 0
            frame += 1

    for i, frame in enumerate(frames):
        score += sum(frame)
        if i < 9 and frame[0] == 10:
            next_frame = frames[i+1]
            if len(next_frame) >= 2:
                score += next_frame[0] + next_frame[1]
            elif len(next_frame) == 1:
                score += next_frame[0] + frames[i+2][0]
        elif i < 9 and sum(frame) == 10:
            score += frames[i+1][0]

    return score
```