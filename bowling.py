```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            if int(frames[i]) + int(frames[i+1]) == 10:
                if frame_number < 10:
                    score += 10
                else:
                    if int(frames[i]) != 0:
                        score += int(frames[i])
                    if int(frames[i+1]) != 0:
                        score += int(frames[i+1])
            elif int(frames[i]) + int(frames[i+1]) > 10:
                score += 10
                for j in range(i+2, len(frames), 2):
                    if frames[j].isdigit() and frames[j+1].isdigit():
                        if int(frames[j]) + int(frames[j+1]) == 10:
                            score += 10
                            break
            else:
                score += int(frames[i]) + int(frames[i+1])
        elif frames[i] == 'X':
            score += 10
        elif frames[i] == '/':
            if frame_number < 10:
                score += 10 - (10 - int(frames[i-2]))
            else:
                if int(frames[i-2]) != 0:
                    score += 10 - (10 - int(frames[i-2]))
        frame_number += 1
    return score