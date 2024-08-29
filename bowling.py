```
def bowling_score(s):
    score = 0
    strike_count = 0
    spare = False
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            strike = False
            if s[i] == "10":
                score += 10 + 10 + 10
                strike_count = 2
            else:
                score += int(s[i]) * 2
                if s[i+1] == "/":
                    spare = True
        elif s[i] == "X":
            strike = True
            score += 10
            strike_count = 2
        if not strike and not spare:
            if s[i:i+2] == "10":
                score += 10 + 10
            else:
                score += int(s[i:i+2])
        elif strike or spare:
            if strike_count > 0:
                score += 10
                strike_count -= 1
            else:
                if spare:
                    score += 10
                else:
                    score += 10 + int(s[i+1])*2
    return score