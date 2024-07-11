```python
def bowling_score(s):
    score = 0
    roll = 0
    i = 0
    while i < len(s):
        if s[i].isdigit():
            roll = int(s[i])
        elif s[i] == "/":
            score += 10 - (10 - roll) // 2 * 2
            roll = 0
        elif s[i] == "X":
            if i < len(s) - 1 and s[i+1] in ["X", "/"]:
                # Strike with bonus
                score += 10 + 10
            else:
                score += 10 + (10 - roll) % 2
            roll = 0
        elif s[i] == "-":
            if roll > 0:
                score += min(roll, 10)
            roll = 0
        else:
            if roll > 0:
                score += min(roll, 10) + (10 - roll) // 2 * 2
            roll = int(s[i])
        i += 1

    if roll > 0:
        score += min(roll, 10) + (10 - roll) // 2 * 2

    return score