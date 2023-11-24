def calculate_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10
            if bowl_index + 2 < len(bowls):
                score += calculate_bonus(bowls[bowl_index + 1], bowls[bowl_index + 2])
            frame += 1
            bowl_index += 1
        elif bowls[bowl_index] == "/":
            score += (
                10 - int(bowls[bowl_index - 1]) if bowls[bowl_index - 1] != "-" else 0
            )
            if bowl_index + 1 < len(bowls):
                score += calculate_bonus(bowls[bowl_index + 1])
            frame += 1
            bowl_index += 1
        else:
            score += int(bowls[bowl_index]) if bowls[bowl_index] != "-" else 0
            frame += 1
        bowl_index += 1
    return score


def calculate_bonus(bonus1, bonus2="0"):
    bonus_score = 0
    if bonus1 == "X":
        bonus_score += 10
    else:
        bonus_score += 0 if bonus1 == "-" else int(bonus1)
    if bonus2 == "X":
        bonus_score += 10
    elif bonus2 == "/":
        bonus_score += 10 - int(bonus1) if bonus1 != "-" else 0
    else:
        bonus_score += int(bonus2) if bonus2 != "-" else 0
    return bonus_score


bowls = input().strip()
print(calculate_score(bowls))