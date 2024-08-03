```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            strike = False
            if i < len(frames) - 1 and frames[i+1] == 'X':
                strike = True
            elif i < len(frames) - 1 and frames[i+1].isdigit() and int(frames[i+1]) + int(frames[i]) <= 10:
                score += 10
            else:
                score += int(frames[i]) + int(frames[i+1])
        else:
            score += 10
    return score