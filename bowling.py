```
def bowling_score(s):
    score = 0
    roll = 0
    for char in s:
        if char.isdigit():
            roll += int(char)
        elif char == '/':
            if roll < 10:
                score += 10 - roll
            else:
                score += roll
            roll = 0
    if roll < 10:
        score += 10 - roll
    return score