```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+1]:
            strike = False
            spare = False
            if frames[i*2].isdigit():
                score += int(frames[i*2])
            if frames[i*2+1].isdigit():
                score += int(frames[i*2+1])
        elif frames[i*2:i*2+2].isdigit():
            if len(frames[i*2:i*2+3]) > 0 and frames[i*2:i*2+3][0] == '-':
                spare = True
            score += sum(map(int, frames[i*2:i*2+2]))
        else:
            strike = True
            score += 10
    if not strike and not spare:
        for i in range(1, 3):
            if len(frames[9*2+i]) > 0 and frames[9*2+i].isdigit():
                score += int(frames[9*2+i])
    return score