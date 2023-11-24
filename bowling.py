def calculate_score(bowls):
    score = 0
    rolls = list(bowls)

    frame = 0
    while frame < 10 and frame < len(rolls):
        if rolls[frame] == "X" and len(rolls) >= frame + 3:
            score += 10 + sum([int(roll) for roll in rolls[frame + 1:frame + 3]]) if len(rolls) >= frame + 3 else 10
            frame += 1
        elif rolls[frame] == "/" and len(rolls) >= frame + 2:
            score += 10 - int(rolls[frame - 1]) + int(rolls[frame + 1]) if len(rolls) >= frame + 2 else 10 - int(rolls[frame - 1])
            frame += 2
        else:
            score += int(rolls[frame]) + int(rolls[frame + 1])
            frame += 2

    return score