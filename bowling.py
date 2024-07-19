Here is the modified code:

```
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if frame == 10:
                break
            score += int(frames[i])
            frame += 1
        elif frames[i] == '/':
            if int(frames[i-1]) + int(frames[i+1]) >= 10:
                score += 10
            else:
                score += 2 * (int(frames[i-1]) + int(frames[i+1]))
            i += 2
        i += 1
    return score