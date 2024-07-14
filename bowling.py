```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i].isdigit():
            if len(frames[i]) == 1:
                score += int(frames[i])
            else:
                first_roll = int(frames[i][:1])
                second_roll = int(frames[i][1:])
                if first_roll + second_roll >= 10:
                    score += first_roll + second_roll
                else:
                    score += first_roll + second_roll + 10
        elif frames[i] == '-':
            continue
    return score