```
def bowling_score(s):
    score = 0
    strike_count = 0
    spare = False
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i + 1] == "/":
                if int(s[i]) == 10:
                    score += 10
                    frame += 1
                    strike_count = 1
                else:
                    score += int(s[i]) + 10
                    spare = True
            elif s[i + 1].isdigit():
                if s[i : i + 2] == "10":
                    score += 10
                    frame += 1
                else:
                    score += int(s[i : i + 2])
                    frame += 1
        else:
            strike_count += 1
            if strike_count < 3:
                score += 10
                continue
    return score