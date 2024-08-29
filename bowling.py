```
def bowling_score(s):
    score = 0
    strike = False
    spare = False
    previous_spare = False
    for i in range(0, len(s), 2):
        if s[i] == "X":
            score += 10
            strike = True
        elif s[i].isdigit() and s[i+1].isdigit():
            if int(s[i:i+2]) == 10:
                score += 10
                spare = True
            else:
                score += int(s[i:i+2])
        else:
            if s[i] == "/":
                previous_spare = True

        if strike:
            if i < len(s) - 4 and s[i+1].isdigit() and s[i+2].isdigit():
                score += int(s[i+1:i+3]) + 10
                for _ in range(2):
                    i += 2
            else:
                score += 10 * 2
                strike = False

        elif spare:
            if previous_spare:
                score += 10 + 10
            else:
                score += 10 + int(s[i])
            spare = False
            previous_spare = True

    return score