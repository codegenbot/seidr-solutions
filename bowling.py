def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            bowl1 = int(s[i])
            if i + 1 < len(s) and s[i + 1].isdigit():
                bowl2 = int(s[i + 1])
                if bowl1 + bowl2 == 10:
                    score += 10
                    frame -= 1
                else:
                    score += bowl1 + bowl2
            else:
                score += bowl1
        elif s[i] == "X":
            score += 10
            frame -= 1
        elif s[i] == "/":
            continue
    return score