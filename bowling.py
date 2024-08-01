```
def bowling_score(s):
    score = 0
    frame = 1
    while s and frame <= 10:
        if '/' in s[:2]:
            first_roll = int(s[:1])
            second_roll = int(s[2])
            if first_roll + second_roll == 10:
                score += 10
                s = s[3:]
            else:
                score += first_roll + second_roll
                s = s[3:]
        elif s[0] == 'X':
            score += 10
            s = s[1:]
        else:
            if len(s) >= 2 and s[:2] == 'XX':
                score += 20
                s = s[2:]
            else:
                first_roll = int(s[0])
                score += first_roll
                if frame < 10:
                    remaining_rolls = [int(i) for i in s[1:]]
                    if sum(remaining_rolls) == 10:
                        score += sum(remaining_rolls)
                        s = ''
                    elif len(remaining_rolls) > 0 and min(remaining_rolls) > 0:
                        score += min(remaining_rolls)
                        s = ''.join([str(i) for i in remaining_rolls if i != min(remaining_rolls)])
                    else:
                        s = ''
                frame += 1
    return score