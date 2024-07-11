def bowling_score(s):
    score = 0
    roll = 0
    for char in s:
        if char.isdigit():
            roll = int(char)
        elif char == "/":
            score += 10 - (10 - roll) // 2 * 2
            roll = 0
        elif char == "X":
            score += 10 + (10 - (10 - roll) % 2)
            roll = 0
        else:
            if roll > 0:
                score += min(roll, 10) + (10 - roll) // 2 * 2
            roll = int(char)
    if roll > 0:
        score += min(roll, 10) + (10 - roll) // 2 * 2
    return score