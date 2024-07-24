```
def bowling_score(game):
    score = 0
    frame_num = 1
    for roll in game:
        if roll == 'X':
            score += 10 + (10 if frame_num < 9 else 0)
            frame_num += 1
        elif roll == '/':
            score += 10
            frame_num += 1
        elif roll.isdigit():
            strike = False
            while len(roll) > 1 and roll[1].isdigit():
                if roll[0] == '5' or int(roll[:2]) < 10:
                    break
                else:
                    score += 10 + int(roll)
                    frame_num += 1
                    strike = True
                    break
            if not strike:
                score += int(roll)
        else:
            if roll == '-':
                continue
            elif len(roll) > 1 and roll[0].isdigit():
                score += int(roll[0])
            else:
                score += int(roll)
    return score