```
def bowling_score(s):
    score = 0
    strike_count = 0
    for i in range(0, len(s), 1):
        if s[i] == "X":
            score += 10
            strike_count += 1
        elif s[i] == "/":
            score += 10
        else:
            if s[i].isdigit():
                if strike_count > 0:
                    strike_count -= 1
                elif i < len(s) - 1 and s[i + 1].isdigit():
                    score += int(s[i:i+2])
                else:
                    score += int(s[i])
    return score