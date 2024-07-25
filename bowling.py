```
def bowling_score(s):
    score = 0
    frame = 1
    for roll in s:
        if roll == 'X':
            score += 30
            frame += 1
        elif roll.isdigit():
            if len(roll) > 1 and roll[0] == '/':
                score += int('10' - roll[1])
                frame += 1
            else:
                score += int(roll)
                frame += (roll != '10')
        else:
            if roll == '-':
                continue
            elif '/' in roll:
                score += 10
                frame += 1
            else:
                score += int(roll)
                frame += 1
    return score