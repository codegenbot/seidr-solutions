```
def bowling_score(frames):
    score = 0
    for i in range(len(frames)):
        if frames[i] == 'X':
            if i < 9:
                score += 30
            else:
                score += 10 + int(frames[i-1]) * 2 + 10
        elif frames[i].isdigit():
            if len(frames) - i > 1 and frames[i+1] == '/':
                first_roll = int(frames[i])
                second_roll = 10 - first_roll
                score += first_roll + second_roll
            else:
                score += sum(map(int, frames[i]))
        elif frames[i] == '-':
            continue
    return score