def bowling_score(s):
    score = 0
    roll = 0
    for char in s:
        if char.isdigit():
            roll += int(char)
        elif char == "/":
            if roll < 10:
                score += 10 - roll
            else:
                score += 10
            roll = 0
        elif char == "X":
            score += 10
            roll = 0
        elif char == "-":
            continue
    if roll > 0 and roll < 10:
        score += 10 - roll
    return score