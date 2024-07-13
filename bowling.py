```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            strike = False
            spare = False
            if frames[i*2:i*2+1] == 'X':
                strike = True
                score += 10
            elif frames[i*2:i*2+2].count('/') == 1:
                spare = True
                score += 10
            else:
                for j in range(1, 4):
                    if str(j) not in frames[i*2:i*2+2]:
                        if strike:
                            score += 10 + int(frames[i*2+i])
                        elif spare:
                            score += 10 + int(frames[i*2+i])
                        break
        else:
            for j in range(1, 4):
                if str(j) not in frames[i*2:i*2+2]:
                    if strike and i < 9:
                        score += 10 + int(frames[(i+1)*2+i])
                    elif spare and i < 8:
                        score += 10 + int(frames[(i+2)*2+i])
                    break
    return score