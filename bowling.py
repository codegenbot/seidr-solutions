```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            strike = False
            spare = False
            if frames[i*2:i*2+1].isdigit():
                score += int(frames[i*2:i*2+1])
            else:
                strike = True
            if i < 9 and frames[i*2+1:i*2+2].isdigit():
                score += int(frames[i*2+1:i*2+2])
            elif '/' in frames[(i+1)*2:(i+1)*2+2]:
                spare = True
        else:
            strike = True
        if strike:
            if i < 9 and frames[i*2+1:i*2+2].isdigit():
                score += int(frames[i*2+1:i*2+2]) + 10
            elif i == 9:
                score += 10 + int(frames[18])
        elif spare:
            if i < 9 and frames[(i+1)*2:(i+1)*2+2].isdigit():
                score += int(frames[(i+1)*2:(i+1)*2+2]) + 5
    return score