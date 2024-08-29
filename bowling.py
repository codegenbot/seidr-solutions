```
def bowling_score(s):
    score = 0
    frame = 1
    strike = False
    spare = False

    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i + 1] == "/":
                if int(s[i]) + 1 == 10:
                    score += 10
                    frame += 1
                    strike = True
                else:
                    score += int(s[i]) + 10
                    frame += 1
                    spare = True
            elif s[i + 1].isdigit():
                if s[i : i + 2] == "10":
                    score += 10
                    frame += 1
                else:
                    score += int(s[i : i + 2])
                    frame += 1
        else:
            if s[i] == "X":
                score += 10
                frame += 1
                strike = True
        if strike and (frame < 3 or (frame > 2 and spare)):
            score += 10
            frame += 1
        elif spare:
            score += int(s[2 * (frame - 1)])
            frame += 1

    return score