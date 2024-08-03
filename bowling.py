```
def bowling_score(score_card):
    score = 0
    roll = []
    for char in score_card:
        if char.isdigit():
            roll.append(int(char))
        elif char == '/':
            if sum(roll) < 10:
                score += 10 - sum(roll)
            else:
                score += sum(roll)
            roll = []
        elif char == 'X':
            score += 30
            roll = []
        elif char in '-xX':
            roll = []
    if sum(roll) < 10:
        score += 10 - sum(roll)
    elif len(roll) > 1:
        score += sum(roll)
    return score