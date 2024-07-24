def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i] == "X":
            score += 30
        elif s[i].isdigit():
            if s[i + 1].isdigit():
                score += int(s[i]) + int(s[i + 1])
            else:
                score += int(s[i]) * 2
        else:
            strike = True
            for j in range(i, min(i + 2, len(s))):
                if s[j] != "/":
                    strike = False
                    break
            if strike:
                score += 10 + int(s[i + 1]) + int(s[i + 2])
            else:
                score += 10 + max(int(s[i + 1]), int(s[i + 2]))
    return score