```
def bowling_score(score_str):
    score = 0
    roll = []
    for i in range(0, len(score_str), 2):
        if score_str[i].isdigit():
            roll.append(int(score_str[i]))
        elif score_str[i] == 'X':
            score += 10
            roll = []
        elif score_str[i] == '/':
            if sum(roll) < 10:
                score += 10 - sum(roll)
            else:
                score += sum(roll)
            roll = []
    if sum(roll) >= 10:
        score += 10 + max(0, sum(roll) - 10)
    else:
        score += sum(roll)
    return score