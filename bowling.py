```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i][0] == '/':
            first_roll = int(frames[i][1:])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        else:
            rolls = list(map(int, frames[i].split('/')))
            if len(rolls) > 1:
                score += sum(rolls)
            else:
                score += rolls[0]
    return score