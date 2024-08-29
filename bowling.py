```
def bowling_score(s):
    score = 0
    strike = False
    spare = False
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i + 1] == "/":
                if s[i] == "10":
                    score += 10 + 10
                    frame += 1
                else:
                    score += int(s[i]) + 10
                    spare = True
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
    while strike or spare:
        if strike:
            score += 10
            for _ in range(2):
                frame += 1
            strike = False
        elif spare:
            score += 10
            frame += 1
            spare = False
    return score