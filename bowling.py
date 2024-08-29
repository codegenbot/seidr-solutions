```
def bowling_score(s):
    score = 0
    strike = False
    spare = False
    previous_strike = False
    for i in range(0, len(s), 2):
        if s[i] == "X":
            strike = True
            score += 10
        elif s[i] == "/":
            spare = True
            score += 10
        else:
            if strike or previous_strike:
                if int(s[i]) + int(s[i+1]) >= 10:
                    score += 10
                else:
                    score += int(s[i]) + int(s[i+1])
                frame += 1
                strike = False
                spare = False
            elif s[i] == "10":
                score += 10
                frame += 1
            else:
                score += int(s[i:i+2])
                frame += 1
        if strike:
            for _ in range(2):
                if s[i+2].isdigit():
                    previous_strike = True
                    i += 3
                elif s[i+2] == "X":
                    score += 10
                    i += 4
                else:
                    break
    return score