def bowling_score(s):
    score = 0
    i = 0
    while i < len(s):
        if s[i] == "X":
            score += 10
            i += 1
            if i < len(s) and s[i] in "/123456789":
                score += int(s[i])
                i += 1
            elif i + 2 <= len(s) and s[i:i+2].isdigit():
                score += int(s[i:i+2])
                i += 2
        elif s[i] == "/":
            if s[i-1] in "123456789":
                score += int(s[i-1]) * 2
            else:
                score += 10
            i += 1
        elif s[i].isdigit() and len(s) > i + 1 and s[i+1] == "/":
            if s[i:i+2].isdigit():
                score += int(s[i:i+2])
                i += 2
            else:
                score += int(s[i])
                i += 1
        elif s[i].isdigit() and len(s) > i + 1 and s[i+1] in "123456789":
            if s[i].isdigit():
                score += int(s[i])
                i += 1
            score += int(s[i:i+2])
            i += 2
        else:
            while i < len(s) and not s[i].isdigit() and s[i] != "/":
                i += 1
    return score