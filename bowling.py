```
def bowling_score(game):
    score = 0
    frame_count = 1
    for roll in game + '/':
        if roll == 'X':
            score += 10 + (10 if frame_count < 9 else 0)
            frame_count += 1
        elif roll == '/':
            score += 10
            frame_count += 1
        elif roll.isdigit():
            if frame_count < 9:
                if len(roll) > 1 and roll[1].isdigit():
                    first_roll = int(roll[0])
                    second_roll = 10 - first_roll
                    score += first_roll + second_roll
                    frame_count += 1
                else:
                    score += int(roll)
                    frame_count += 1
            else:
                score += int(roll)
        else:
            score += int(roll)
    return score