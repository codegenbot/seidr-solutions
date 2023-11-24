def calculate_score(bowls):
    score = 0
    rolls = list(bowls)

    frame = 0
    while frame < 10:
        if rolls[frame] == "X":
            score += 10 + bonus_score(rolls, frame + 1, 2) if frame < 9 else 0
            frame += 1
        elif rolls[frame] == "/":
            score += 10 - int(rolls[frame - 1]) + bonus_score(rolls, frame + 1, 1) if frame > 0 else 0
            frame += 2
        else:
            score += int(rolls[frame]) + int(rolls[frame + 1])
            frame += 2

    return score


def bonus_score(rolls, start, num_rolls):
    bonus = sum([int(roll) for roll in rolls[start : start + num_rolls]])
    if rolls[start - 1] == "/" and start - 2 >= 0:
        return 10 - int(rolls[start - 2]) + bonus
    elif rolls[start - 2] == "X" and start - 2 >= 0:
        return 10 + bonus
    else:
        return bonus

print(calculate_score(input()))