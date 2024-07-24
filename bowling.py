```
def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) == 1:
                score += int(frames[i])
            else:
                score += int(frames[i][0])
                if frames[i][1] == '/':
                    score += 10 - int(frames[i][0])
                elif frames[i][1] == 'X':
                    score += 10
        elif frames[i] == 'X':
            score += 10
            frame += 1
        else:
            strike = True
            for j in range(i+1, len(frames)):
                if not frames[j].isdigit():
                    break
                if frames[j][0].isdigit() and frames[j][1] == '/':
                    continue
                if frames[j][0].isdigit() and frames[j][1] == 'X':
                    strike = False
                    break
            if strike:
                score += 10 + int(frames[i][0]) * 2
            else:
                score += 10 + int(frames[i][0])
    return score