```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            strike = False
            spare = False
            if int(s[i:i+2]) == 10:
                strike = True
            else:
                if int(s[i:i+2]) < 10:
                    score += int(s[i:i+2])
                    frame += 1
                else:
                    if i + 3 <= len(s):
                        next_frame = s[i+2:i+4]
                        if int(next_frame) == 10:
                            strike = True
                        elif int(next_frame) < 10:
                            score += int(next_frame)
                            frame += 1
                            spare = True
            if not strike and not spare:
                score += int(s[i:i+2])
        else:
            if s[i] == 'X':
                score += 10
                frame += 1
                if i + 3 <= len(s):
                    next_frame = s[i+1:i+3]
                    if int(next_frame) == 10:
                        strike = True
                    elif int(next_frame) < 10:
                        score += int(next_frame)
                        frame += 1
            else:
                score += int(s[i])
    return score