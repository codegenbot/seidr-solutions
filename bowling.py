def bowling_score(s):
    score = 0
    i = 0
    while i < len(s):
        if s[i].isdigit():
            roll = int(s[i])
            i += 1
            if i < len(s) and (s[i] == "-" or s[i] == "X" or s[i] in "/"):
                score += min(roll, 10)
                roll = 0
        elif s[i] == "X":
            if i < len(s) - 1 and (s[i+1] == "X" or s[i+1] == "/"):
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
            while i < len(s) and s[i].isdigit():
                roll = int(roll * 10 + int(s[i]))
                i += 1
            if i < len(s) and (s[i] == "-" or s[i] == "X" or s[i] in "/"):
                score += min(roll, 10)
                roll = 0
        i += 1
    if roll > 0:
        score += min(roll, 10) + (10 - roll) // 2 * 2
    return score