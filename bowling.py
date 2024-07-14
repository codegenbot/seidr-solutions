```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('/')):
        if len(frame) == 1: 
            if i < 9:
                score += 10 + int(frames[9+i])
            else:
                score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                if i < 9:
                    score += 10 + int(frames[9+i])
                else:
                    score += 10
            elif i < 9:
                score += first_roll + second_roll
        else:
            strike = 0
            for j in range(2):
                if i < 9:
                    score += int(frame[j])
                else:
                    if strike == 1:
                        score += 10
                    else:
                        break
                if frame[0] == 'X':
                    strike = 1
    return score