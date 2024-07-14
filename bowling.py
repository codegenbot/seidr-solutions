def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i] == "X":
            score += 30
        elif s[i].isdigit():
            strike_count = 1
            while i < len(s) and not s[i].isdigit() and s[i] != "/":
                i += 1
            strike_count *= int(s[:i])
            score += strike_count * 10
        else:
            score += sum(map(int, s[i : i + 2]))
    return score