```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            strike = False
            spare = False
            if frames[i*2].isdigit():
                first_roll = int(frames[i*2])
                if frames[i*2+1].isdigit():
                    second_roll = int(frames[i*2+1])
                    score += 10 + second_roll
                else:
                    score += 10
            elif frames[i*2] == 'X':
                strike = True
                score += 10
        else:
            first_roll = int(frames[i*2])
            if frames[i*2+1].isdigit():
                second_roll = int(frames[i*2+1])
                if first_roll + second_roll < 10:
                    score += first_roll + second_roll
                else:
                    score += 10
            else:
                score += first_roll
    return score