def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i + 1] == "/":
                strike = False
                spare = False
                if s[i] == "10":
                    score += 10 + 10 + 10
                    frame += 2
                else:
                    score += int(s[i]) * 2
                    frame += 1
            elif s[i + 1].isdigit():
                if s[i : i + 2] == "10":
                    score += 10 + 10
                    frame += 1
                else:
                    score += int(s[i : i + 2])
                    frame += 1
        else:
            if s[i] == "X":
                strike = True
                spare = False
                score += 10
                frame += 1
    return score