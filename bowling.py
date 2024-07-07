```
def bowling_score(frames):
    score = 0
    frame = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if len(frames[i]) > 1:
                if int(frames[i:i+2]) == 10: 
                    score += 10 + (10 - int(frames[i-1:i])) if frame < 9 else 10
                    frame += 1
                    i += 1
                elif int(frames[i]) < 10:
                    score += int(frames[i])
                    frame += 1
                    i += 1
            else:
                score += int(frames[i])
                i += 1
        else:
            if frames[i] == 'X':
                score += 10 + (10 - int(frames[i-2:i])) if frame < 9 else 10
                frame += 1
                i += 1
            elif frames[i] == '/':
                a, b = map(int, frames[i+1:].split('/'))
                score += a + b
                frame += 1
                i += len(frames[i+1:].split('/')) + 1
            else:
                continue
    return score