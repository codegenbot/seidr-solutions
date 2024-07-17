def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i] == "X":
            score += 30
        elif s[i].isdigit():
            strike = False
            for j in range(i + 1, min(i + 2 + len(s) - i - 1, 3)):
                if s[j].isdigit():
                    if len(s) - j - 1 >= 2:
                        return "Invalid input"
                    else:
                        score += int(s[i] + s[j])
                        strike = True
            if not strike:
                for j in range(i + 1, min(i + 3 + len(s) - i - 1, 4)):
                    score += int(s[j])
        elif s[i] == "/":
            return "Invalid input"
    return score