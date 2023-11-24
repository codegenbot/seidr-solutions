def calculate_score(bowls):
    score = 0
    rolls = list(bowls)

    frame = 0
    while frame < 10:
        if rolls[frame] == "X":
            score += 10 + get_strike_bonus(rolls, frame)
            frame += 1
        elif rolls[frame + 1] == "/":
            score += 10 + get_spare_bonus(rolls, frame)
            frame += 2
        else:
            score += get_frame_score(rolls, frame)
            frame += 2

    return score


def get_strike_bonus(rolls, frame):
    next_roll = int(rolls[frame + 1])
    next_next_roll = int(rolls[frame + 2])
    return next_roll + next_next_roll


def get_spare_bonus(rolls, frame):
    next_roll = int(rolls[frame + 2])
    return next_roll


def get_frame_score(rolls, frame):
    roll_1 = int(rolls[frame])
    roll_2 = int(rolls[frame + 1])
    return roll_1 + roll_2