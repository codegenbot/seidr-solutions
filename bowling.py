def bowling_score(s):
    score = 0
    for i in range(0, len(s), 2):
        if s[i] == "X":
            score += 30
        elif s[i].isdigit() and s[i + 1] == "/":
            score += int(s[i]) * 10 + 5 - int(s[i])
        else:
            strike = False
            for j in range(i, len(s), 2):
                if s[j] != "X" and (s[j].isdigit() or s[j] == "/"):
                    break
            if j - i < 2:
                score += 10 + int(s[i]) * 1
            else:
                strike = True
                for k in range(i, len(s), 2):
                    if k - j < 2 and s[k].isdigit():
                        score += int(s[k])
                    elif s[k] == "X":
                        score += 10
                    elif k - i < 4 or (k - i >= 6 and j - k > 0):
                        score += int(s[k]) + int(s[k + 1])
                if strike:
                    score += 10
    return score