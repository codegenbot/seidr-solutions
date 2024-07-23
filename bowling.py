```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10
            if frame < 10:
                for j in range(i+1, len(frames)):
                    if frames[j] != 'X' and frames[j] in '1234567890/':
                        score += int(frames[j].lstrip('/').replace('-', '')) * (frame != 10)
                        break
            frame += 1
        elif frames[i] in '1234567890/':
            if frames[i] == '/':
                for j in range(i+1, len(frames)):
                    if frames[j] != '/' and frames[j] in '1234567890X':
                        score += int(frames[j].lstrip('/').replace('-', '')) * (frame != 10)
                        break
            elif frames[i] == '0':
                score += 10
                frame += 1
            else:
                score += int(frames[i]) + int(frames[i+1].lstrip('/').replace('-', ''))
        frame += 1
    return score