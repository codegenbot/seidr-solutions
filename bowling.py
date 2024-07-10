def bowling_score(score_str):
    score = 0
    roll = 0
    for char in score_str:
        if char.isdigit():
            roll += int(char)
        elif char == "X":
            score += 10 + (10 - roll) if roll > 0 else 10
            roll = 0
        elif char == "/":
            score += 10 + max(roll, 10 - roll)
            roll = 0
    if roll > 0:
        score += min(roll, 10) * 2 + (10 - roll) if roll < 10 else 20
    return score