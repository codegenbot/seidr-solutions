```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            score += int(frames[i]) + int(frames[i+1])
            frame += 1
        elif frames[i] == 'X':
            score += 10 + 10 if frame < 9 else 10
            frame += 1
        elif frames[i] == '/':
            first, second = map(int, frames[i-1:i+1].split('/'))
            score += first + second
            frame += 1
        elif frames[i] == '-':
            score -= int(frames[i-1])
            frame += 1
    return score