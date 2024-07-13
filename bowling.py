```
def bowling_score(s):
    score = 0
    roll = 0
    for char in s:
        if char.isdigit():
            roll += int(char)
        elif char == 'X':
            score += 10 + roll
            roll = 0
        elif char == '/':
            score += 10 + roll
            roll = 0
        else:
            if roll > 1:
                score += 10 + roll
            elif roll == 1:
                score += 10
            roll = 0
    return score