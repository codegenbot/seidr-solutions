```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':  # strike
            score += 10 + (10 if i+2 < len(frames) and frames[i+1] != '/' else 0)
        elif frames[i] == '/':
            continue
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1].replace('/', ''))
            score += first_roll + second_roll
    return score