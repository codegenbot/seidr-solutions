```python
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if frames[i] == '10':
                score += 10
                i += 1
                break
            else:
                score += int(frames[i])
                if i + 2 < len(frames) and frames[i+1] == '/':
                    i += 2
                frame += 1
        elif frames[i] == '/':
            first_roll = int(frames[:i].split('/')[-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            i += 3
    return score