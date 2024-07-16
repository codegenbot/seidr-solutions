def bowling_score(frames):
    score = 0
    rolls = frames.split("/")
    for roll in rolls:
        if "X" in roll:
            score += 10 + int(rolls[rolls.index(roll) + 1].lstrip("0")) * 2
        elif "-" in roll:
            first_roll, second_roll = map(int, re.sub("[^0-9]", "", roll).split("-"))
            score += first_roll + second_roll
        else:
            score += sum(map(int, roll))
    return score