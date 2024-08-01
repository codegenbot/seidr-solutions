```
def bowling_score(score_str):
    score = 0
    roll = ''
    for char in score_str:
        if char.isdigit():
            roll += char
        elif char == '/':
            if len(roll) >= 2 and int(roll[0]) + int(roll[1]) <= 10:
                score += (int(roll[0]) + int(roll[1])) * 10 - int(roll[0]) * 10
            else:
                score += sum(range(1, 11))
            roll = ''
        elif char == 'X':
            score += 30
            roll = ''
        elif char.lower() in ['-', '']:
            continue
    if len(roll) >= 2 and int(roll[0]) + int(roll[1]) <= 10:
        score += (int(roll[0]) + int(roll[1])) * 10 - int(roll[0]) * 10
    elif roll == 'X':
        score += 30
    else:
        score += sum(range(1, 11))
    return score