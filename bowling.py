def bowling_score(s):
    score = 0
    roll = 0
    for char in s:
        if char.isdigit():
            roll = int(char)
        elif char == "/":
            score += max(10 - roll, 0) + (10 * math.floor((roll + 10) / 10))
            roll = 0
    score += max(10 - roll, 0) + (10 * math.floor((roll + 10) / 10))
    return score