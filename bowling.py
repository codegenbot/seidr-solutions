```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if frames[i+1] == '/':
                score += int(frames[i]) * 10 + 10
            else:
                score += int(frames[i]) * 10 + int(frames[i+1])
        elif frames[i] == 'X':
            score += 30
        elif frames[i] == '-':
            continue
        else:
            if frames[i].isdigit():
                score += int(frames[i]) * 10
            for j in range(1, 3):
                if i+j > len(frames)-2:
                    break
                if frames[i+j].isdigit():
                    score += int(frames[i+j])
    return score