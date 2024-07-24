```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+1]:
            strike = False
            spare = False
            if frames[i*2:i*2+1].count('X') == 2:
                strike = True
            elif frames[i*2:i*2+1].count('/') == 1:
                spare = True
            else:
                first_roll = int(frames[i*2:i*2+1].replace('X', '0').split('/')[0])
                second_roll = int(frames[i*2:i*2+1].replace('X', '0').split('/')[-1])
                if strike:
                    score += 10 + first_roll + second_roll
                elif spare:
                    score += 10 + min(first_roll, second_roll)
                else:
                    score += first_roll + second_roll
        else:
            strike = False
            spare = False
            if frames[i*2:i*2+1].count('X') == 2:
                strike = True
            elif frames[i*2:i*2+1].count('/') == 1:
                spare = True
            else:
                first_roll = int(frames[i*2:i*2+1].replace('X', '0').split('/')[0])
                second_roll = int(frames[i*2:i*2+1].replace('X', '0').split('/')[-1])
                if strike:
                    score += 10 + first_roll + second_roll
                elif spare:
                    score += 10 + min(first_roll, second_roll)
                else:
                    score += first_roll + second_roll
    return score