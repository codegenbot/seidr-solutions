```
def bowling_score(score_str):
    score = 0
    roll = []
    
    for char in score_str:
        if char.isdigit():
            roll.append(int(char))
        elif char == '/':
            if sum(roll) < 10:
                score += 10 - sum(roll)
            else:
                score += sum(roll)
            roll = []
        elif char == 'X':
            score += 10
            roll = []
        elif char == '-':
            continue
    if sum(roll) > 0:
        if len(roll) == 2 and roll[0] + roll[1] == 10:
            score += 10
        else:
            score += sum(roll)
    
    return score