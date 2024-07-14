```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            frame -= 1
        elif frames[i] == '/':
            strike = True
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if strike:
                score += 10 + first_roll + second_roll
                strike = False
            else:
                score += first_roll + second_roll
    return score