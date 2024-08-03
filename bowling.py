```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + (10 if i+2 < len(frames) and frames[i+2] == 'X' else 0)
            frame += 1
        elif frames[i] == '/':
            score += 10 - int(frames[i+1])
            frame += 1
        else:
            strike = False
            for j in range(i, i+3):
                if j < len(frames) and frames[j] == 'X':
                    strike = True
                    break
            if strike:
                score += 10 + (int(frames[i+1]) + int(frames[i+2])) if i+2 < len(frames) else 10
                frame += 1
            else:
                score += int(frames[i]) + int(frames[i+1])
                frame += 1
    return score