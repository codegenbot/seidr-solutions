```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[2*i:2*i+1] == 'X':
            score += 10
            if i < 8:
                score += int(frames[2*i+2])
                score += int(frames[2*(i+1)])
            elif i == 9:
                score += 10 + int(frames[2*i+1]) + int(frames[2*i+2])
        elif frames[2*i:2*i+2] in ['--X', 'XX']:
            score += 10
            if i < 8:
                score += int(frames[2*(i+1):2*(i+2)+1])
            elif i == 9:
                score += 10 + int(frames[2*i+1]) + int(frames[2*i+2])
        else:
            first_roll = int(frames[2*i:2*i+1])
            if int(frames[2*i+1:2*i+2]) + first_roll > 10:
                second_roll = 10 - first_roll
            else:
                second_roll = int(frames[2*i+1:2*i+2])
            score += first_roll + second_roll
    return score