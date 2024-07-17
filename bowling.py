```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            strike = False
            spare = False
            if frames[i*2] == 'X':
                strike = True
            elif frames[i*2].isdigit():
                if int(frames[i*2]) + int(frames[i*2+1]) <= 10:
                    spare = True
            if strike:
                score += 10 + (int(frames[19-i*2-1]) + int(frames[20-i*2-1])) * 2
            elif spare:
                score += 10 + int(frames[i*2+1])
            else:
                score += int(frames[i*2]) + int(frames[i*2+1])
        else:
            if frames[i*2] == 'X':
                score += 10 + (int(frames[19-i*2-1]) + int(frames[20-i*2-1])) * 2
            elif frames[i*2].isdigit():
                score += int(frames[i*2]) + int(frames[i*2+1])
    return score