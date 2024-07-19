```python
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 30
            frame += 1
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
            frame += 2
        else:
            first_roll = int(frames[i])
            if i < len(frames) - 1 and frames[i+1] == 'X':
                second_roll = 10
                score += first_roll + second_roll
                frame += 1
            elif i < len(frames) - 1 and frames[i+2].isdigit():
                second_roll = int(frames[i+1]) + int(frames[i+2])
                if second_roll == 10:
                    score += first_roll + 10
                else:
                    score += first_roll + second_roll
                frame += 1
            else:
                second_roll = int(frames[i+1])
                if first_roll + second_roll == 10:
                    score += 10
                else:
                    score += first_roll + second_roll
                frame += 1
    return score