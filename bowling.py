```
def bowling_score(s):
    score = 0
    strike_count = 0
    spare = False
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i + 1] == "/":
                if int(s[i]) + int(s[i + 1]) < 10:
                    score += 10 - int(s[i]) - int(s[i + 1])
                    frame += 1
                else:
                    score += int(s[i]) + int(s[i + 1])
                    frame += 1
            elif s[i + 1].isdigit():
                if int(s[i : i + 2]) == 10:
                    score += 10
                    frame += 1
                else:
                    score += int(s[i : i + 2])
                    frame += 1
        else:
            if s[i] == "X":
                strike_count += 1
                if strike_count < 3:
                    score += 10
                    frame += 0
                elif strike_count == 3:
                    score += 10
                    frame += 2
                else:
                    score += 10 + int(s[20 - i]) * 2
                    frame += 1
            else:
                if spare:
                    score += 10 - int(s[i : i + 1])
                    frame += 1
                    spare = False
                elif strike_count < 3:
                    score += 10
                    frame += 0
                else:
                    score += int(s[i : i + 1]) * 2
                    frame += 1