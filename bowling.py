```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            score += int(frames[i]) + int(frames[i+1])
        elif frames[i] == 'X':
            score += 10 + 10 - (10 - int(frames[:i]))
        else:
            strike = True
            for j in range(i, len(frames), 2):
                if not frames[j].isdigit() or not frames[j+1].isdigit():
                    break
            if j == i + 1 and int(frames[i]) + int(frames[i+1]) < 10:
                score += 10 - (10 - int(frames[:i]))
            elif strike:
                score += 10 + int(frames[i])
    return score