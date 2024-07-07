```
def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) > 1:
                if int(frames[i]) == 10: 
                    score += 10 + (10 - int(frames[i-1:i+1])) if frame < 9 else 10
                    frame += 1
                elif int(frames[i]) < 10:
                    score += int(frames[i])
                    frame += 1
            else:
                score += int(frames[i])
        else:
            if frames[i] == 'X':
                if frame < 9:
                    score += 10 + (10 - int(frames[i-1])) 
                else:
                    score += 10
                frame += 1
            elif frames[i] == '/':
                a, b = map(int, [frames[i-2], frames[i-1]])
                if a + b == 10:
                    if frame < 9:
                        score += 10 + (10 - int(frames[i-3:i]))
                    else:
                        score += 10
                elif a > 0 and b > 0:
                    score += a + b
                frame += 1
    return score