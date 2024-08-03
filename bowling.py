def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            strike = False
            if i + 3 < len(s) and s[i : i + 3] == "XXX":
                strike = True
            elif s[i + 1].isdigit() or (i + 2 < len(s) and s[i + 2].isdigit()):
                score += 10
                frame += 1
            else:
                if strike:
                    score += 10 + int(s[i])
                else:
                    score += int(s[i : i + 2])
        elif s[i] == "X":
            score += 10
            frame += 1
    return score