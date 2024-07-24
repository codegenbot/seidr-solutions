```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            first_roll = int(frames[i])
            second_roll = int(frames[i+1]) if frames[i+1].isdigit() else 10
            if second_roll == 10:
                score += second_roll + sum(map(int, frames[i+2:i+10]))
            elif first_roll + second_roll < 10:
                score += first_roll + second_roll
            else:
                bonus = 10 - first_roll
                score += (first_roll + max(0, min(bonus, 10-second_roll))) * 2
        else:
            if frames[i] == 'X':
                score += 30
            elif frames[i] == '/':
                score += 10
    return score