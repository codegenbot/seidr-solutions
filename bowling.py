def bowling_score(s):
    score = 0
    i = 0
    while i < len(s):
        if s[i].isdigit():
            roll = int(s[i])
            i += 1
            if i < len(s) and (s[i] == "/" or s[i] == "X"):
                if s[i] == "X":
                    if i + 1 < len(s) and s[i+1] in ["X", "/"]:
                        score += 10 + 10
                    else:
                        score += 10 + (10 - roll) % 2
                else:
                    score += 10 - (10 - roll) // 2 * 2
                i += 1
            elif s[i] == "-":
                if roll > 0:
                    score += min(roll, 10)
                roll = 0
            else:
                while i < len(s) and s[i].isdigit():
                    roll = roll * 10 + int(s[i])
                    i += 1
                if roll > 0:
                    score += min(roll, 10) + (10 - roll) // 2 * 2
        elif roll > 0:
            if s[i] == "/":
                score += 10 - (10 - roll) // 2 * 2
                roll = 0
            elif s[i] == "X":
                score += 10 + (10 - roll) % 2
                roll = 0
        i += 1
    return score