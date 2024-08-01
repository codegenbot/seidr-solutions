def bowling_game(s):
    score = 0
    roll_count = 1
    for c in s:
        if c.isdigit():
            score += int(c)
        elif c == "/":
            score += 10
        elif c == "X":
            score += 10 + 30 - 2 * min(int(s[roll_count - 1]), 5)
        roll_count = (roll_count + 1) % 2 + 1
    return score