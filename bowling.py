```
def bowling_score(frames):
    score = 0
    frame = 0
    for roll in frames:
        if roll == 'X':
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif roll == '/':
            score += 10
            frame += 1
        elif roll.isdigit():
            if len(roll) > 1 and roll[0] == '5':
                score += int(roll)
                frame += 1
            else:
                score += int(roll)
                if frame < 9:
                    frame += 1
        else:
            strike = False
            for i in range(2):
                if roll[i].isdigit():
                    if i == 0 and roll[1] == '5':
                        score += 15
                        break
                    elif i == 0:
                        score += int(roll[i])
                    else:
                        score += int(roll[i])
                    frame += 1
                    if i == 0:
                        strike = True
                    break
            if not strike:
                score += int(roll[0]) + int(roll[1])
                frame += 2
    return score