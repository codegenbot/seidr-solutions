def bowling_score(s):
    s = s.replace("/", "X")
    score = 0
    roll = 0
    for char in s:
        if char == "X":
            score += max(10 - roll, 1) * 10 + roll
            roll = 0
        elif char.isdigit():
            roll += int(char)
    if roll > 0:
        score += max(10 - roll, 1) * 10
    return score