def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            strike = False
            if i + 3 <= len(s) and s[i + 1] == "/":
                score += int(s[i]) * 2
                continue
            if i + 1 >= len(s) or s[i + 1] != "/":
                score += int(s[i])
            else:
                strike = True
        elif s[i] == "X":
            score += 10
            frame -= 1
            strike = True
        if not strike and i < len(s):
            if s[i + 1].isdigit():
                score += int(s[i]) + int(s[i + 1])
            else:
                score += int(s[i]) + 10
        if frame == 0:
            break
    return score