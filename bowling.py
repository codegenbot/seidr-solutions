```python
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(len(frames)):
        if frames[i].isdigit():
            if frame == 10:
                break
            score += int(frames[i])
            frame += 1
        elif frames[i] == '/':
            score += 10 - (int(frames[i-2]) + int(frames[i-1]))
            frame += 1
    return score