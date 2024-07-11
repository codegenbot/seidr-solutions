def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10 + get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10
            score += int(bowls[bowl_index])
            bowl_index += 2
        else:
            score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            bowl_index += 2
        frame += 1
    return score


def get_strike_bonus(bowls, bowl_index):
    bonus = 0
    if bowls[bowl_index + 1] == "X":
        bonus += 10
        if bowls[bowl_index + 2] == "X":
            bonus += 10
        else:
            bonus += int(bowls[bowl_index + 2])
    else:
        bonus += int(bowls[bowl_index + 1])
        bonus += int(bowls[bowl_index + 2])
    return bonus


bowls = input()
print(calculate_bowling_score(bowls))