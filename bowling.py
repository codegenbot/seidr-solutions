```
def bowling_score(score_string):
    score = 0
    roll = 0
    for char in score_string:
        if char.isdigit():
            roll = int(char)
        elif char == '/':
            score += max(10 - roll, 0)
            roll = 0
        elif char == 'X':
            score += 30
            roll = 0
        else:
            score += min(roll + 1, 10) if roll > 0 else 1
            roll = 0
    if roll > 0:
        score += min(roll + 1, 10)
    return score