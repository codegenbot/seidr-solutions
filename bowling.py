```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            frame += 1
        elif frames[i] == '/':
            strike = True
            while strike:
                if i+3 < len(frames) and frames[i+1] != 'X' and frames[i+3] != '/':
                    score += int(frames[i+1]) + int(frames[i+2])
                    frame += 1
                    break
                elif i+4 < len(frames):
                    score += int(frames[i+1]) + int(frames[i+2]) + 10
                    frame += 1
                    strike = False
                else:
                    score += 20
                    frame += 1
                    break
        else:
            if frames[i] == '5' and frames[i+1] == '5':
                score += 30
                frame += 1
            elif int(frames[i]) + int(frames[i+1]) >= 10:
                score += 10 + int(frames[i+2])
                frame += 1
            else:
                score += int(frames[i]) + int(frames[i+1])
                frame += 1
    return score