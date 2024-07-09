```
def bowling_score(frames):
    score = 0
    frame_count = 1
    for roll in frames:
        if len(roll) == 1:
            if frame_count < 10 and int(roll) == 10:
                score += 10 + strike_bonus(roll, frame_count)
                frame_count += 1
            else:
                score += 10
        elif len(roll) == 2:
            first_roll = int(roll[0])
            second_roll = int(roll[1])
            if first_roll + second_roll == 10:
                score += 10 + spare_bonus(roll, frame_count)
                frame_count += 1
            else:
                score += first_roll + second_roll
        elif len(roll) == 3:
            first_roll = int(roll[0])
            second_roll = int(roll[1])
            third_roll = int(roll[2])
            score += first_roll + second_roll + third_roll
            frame_count += 1
    return score

def strike_bonus(roll, frame):
    if frame == 10:
        return 20
    else:
        return 15

def spare_bonus(roll, frame):
    if frame == 9 and int(roll[0]) + 2 == 10:
        return 10
    elif frame == 10 and int(roll[1]) == 10:
        return 15
    else:
        return 5