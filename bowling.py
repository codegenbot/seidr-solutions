```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            strike = False
            if i < len(frames) - 1 and frames[i+1] == 'X':
                strike = True
            elif i < len(frames) - 2 and frames[i+1:i+3] == 'XX':
                strike = True
            if not strike:
                score += int(frames[i]) + int(frames[i+1])
        else:
            score += sum(map(int, list(frames[i])))
    return score