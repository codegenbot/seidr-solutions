```
def bowling_score(frames):
    score = 0
    frame = 0
    for roll in frames:
        if roll.isdigit():
            if len(roll) > 1 and roll[0] == 'X':
                score += 30
                frame += 1
            elif roll[0] == 'X':
                score += 10 + int(roll[1:])
                frame += 1
            else:
                score += int(roll)
        else:
            if roll == '-':
                continue
            elif roll == 'X':
                score += 10
                frame += 1
            else:
                first_roll = int(roll.split('/')[0])
                second_roll = int(roll.split('/')[1])
                if first_roll + second_roll == 10:
                    score += 10 + int(min(roll))
                    frame += 1
                elif first_roll > 0 and second_roll > 0:
                    score += first_roll + second_roll
                    frame += 1
    return score