```
def bowling_score(s):
    score = 0
    strike = False
    spare = False
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i + 1] == "/":
                if int(s[i]) + int(s[i+1]) < 10:
                    score += 10 - int(s[i : i+1])
                    frame += 1
                else:
                    score += int(s[i : i+2])
                    frame += 1
            elif s[i + 1].isdigit():
                if s[i : i + 2] == "10":
                    score += 10
                    frame += 1
                else:
                    score += int(s[i : i+2])
                    frame += 1
        else:
            strike = True
    while strike:
        score += 10
        frame += 1
        if frame > 10:
            break
        strike = False
    return score