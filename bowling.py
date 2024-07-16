```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += int(frames[i+1])
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if sum([int(x) for x in frames[i:i+2]]) >= 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
    return score