```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and (frames[i+1] == '/' or i == len(frames) - 2):
            if frames[i] == 'X':
                score += 30
            elif frames[i] == '5' * 2:
                score += 20
            else:
                strike = int(frames[i])
                score += strike
        elif frames[i].isdigit() and (frames[i+1] == '/' or i == len(frames) - 1):
            if frames[i] == 'X':
                score += 10
            else:
                spare = int(frames[i]) + 10
                score += spare
    return score