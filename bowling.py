def bowling_score(s):
    score = 0
    roll = 0
    for i in range(10):
        if "/" in s[i * 2 : i * 2 + 1]:
            first_roll = int(s[i * 2 : i * 2].strip("/"))
            second_roll = int(s[i * 2 + 1].strip("/"))
            score += min(first_roll, 10) + min(second_roll, 10 - first_roll)
        else:
            score += min(int(s[i * 2].strip("X")), 10) + roll
            roll = 10 if i < 9 and s[i * 2].strip("X") == "X" else 0
    return score