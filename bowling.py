def calculate_score(bowls):
    score = 0
    rolls = list(bowls.replace("-", "0"))

    frame = 0
    while frame < 10:
        if rolls[frame] == "X":
            score += 10 + bonus_score(rolls, frame + 1, 2)
            frame += 1
        elif rolls[frame] == "/":
            score += 10 - int(rolls[frame - 1]) + int(rolls[frame + 1])
            frame += 2
        else:
            score += int(rolls[frame]) + int(rolls[frame + 1])
            frame += 2

    if rolls[-1] == "X" or rolls[-1] == "/":
        score += int(rolls[-2])

    return score


def bonus_score(rolls, start, num_rolls):
    bonus = sum([int(roll) for roll in rolls[start : start + num_rolls]])
    return bonus