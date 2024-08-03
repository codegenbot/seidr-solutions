```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            strike = False
            spare = False
            if frames[i*2] == 'X':
                strike = True
            elif frames[i*2:i*2+2].count('/') == 1:
                spare = True
            if not strike and not spare:
                score += int(frames[i*2:i*2+1])
            else:
                if strike:
                    score += 10 + int(frames[(i+1)*2:(i+2)*2]) + int(frames[(i+2)*2:(i+3)*2])
                elif spare:
                    score += 10 + int(frames[(i+1)*2:(i+2)*2])
        else:
            if frames[i*2] == 'X':
                strike = True
            else:
                first_roll = int(frames[i*2:i*2+1])
                second_roll = int(frames[i*2+1:i*2+2])
                score += first_roll + second_roll
    return score