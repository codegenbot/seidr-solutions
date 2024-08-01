```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            strike = False
            if int(s[i]) == 10:
                strike = True
            else:
                first_roll = int(s[i])
                second_roll = int(s[i+1])
                if strike:
                    score += 10 + first_roll
                elif first_roll + second_roll >= 10:
                    score += first_roll + second_roll
                else:
                    score += first_roll
                    frame_score = first_roll + second_roll
                    while frame < 10 and (frame_score < 10 or s[i+2].isdigit()):
                        i += 1
                        if s[i].isdigit():
                            first_roll = int(s[i])
                            score += first_roll
                            frame_score = first_roll
                        else:
                            score += 10
                            frame -= 1
                    if frame < 10 and (s[i].isdigit() or s[i+1].isdigit()):
                        i += 1
                        while i < len(s) and s[i].isdigit():
                            score += int(s[i])
                            i += 1
            frame += 1
        else:
            if strike:
                score += 10
                frame -= 1
            elif s[i] == 'X':
                score += 10
                frame -= 1
    return score