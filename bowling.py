def calculate_score(bowls):
    score = 0
    rolls = list(bowls)

    frame = 0
    while frame < 10:
        if rolls[frame] == "X":
            score += 10 + sum([int(roll) for roll in rolls[frame + 1:frame + 3]])
            frame += 1
        elif rolls[frame + 1] == "/":
            score += 10 + int(rolls[frame + 2])
            frame += 2
        else:
            score += int(rolls[frame]) + int(rolls[frame + 1])
            frame += 2

    return score