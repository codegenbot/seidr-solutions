```
def bowling_score(s):
    score = 0
    roll = 0
    for char in s:
        if char.isdigit():
            roll = int(char)
        elif char == '/':
            score += max(10 - roll, 0) * 2
            roll = 0
        else:
            score += max(roll, 0)
            roll = 0
    if roll > 0:
        score += roll
    return score