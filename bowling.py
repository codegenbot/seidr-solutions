```python
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if frame == 10:
                break
            if len(frames) - i > 2 and frames[i+1] == '/':
                score += int(frames[i]) + 10
                i += 3
            else:
                score += int(frames[i])
                frame += 1
        elif frames[i] == '/':
            first_roll = int(frames[i-1].replace('/',''))
            second_roll = int(frames[i+1].replace('/', ''))
            if first_roll + second_roll < 10:
                score += 10 - first_roll
            else:
                score += first_roll + second_roll
            frame += 1
        i += 1
    return score