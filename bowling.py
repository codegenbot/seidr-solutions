```
def bowling_score(s):
    score = 0
    frame = 1
    strike = False
    spare = False
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i + 1] == "/":
                if s[i] == "10":
                    score += 10 + 10
                    frame += 1
                else:
                    score += int(s[i]) + 10
                    frame += 1
                    spare = True
            elif s[i + 1].isdigit():
                if s[i : i + 2] == "10":
                    score += 10 + 10
                    frame += 1
                else:
                    score += int(s[i : i + 2])
                    frame += 1
        else:
            strike = True
    for _ in range(frame - 1):
        if strike:
            score += 10
            strike = False
        elif spare:
            score += 10
            spare = False
            frame -= 1
    return score