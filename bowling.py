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
            score += int(bowls[bowl_index + 2])
            bowl_index += 2
        else:
            score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            if bowls[bowl_index + 1] == "-":
                score -= int(bowls[bowl_index + 1])
            bowl_index += 2
        frame += 1
    return score


def get_strike_bonus(bowls, index):
    if bowls[index + 2] == "X":
        return 10 + 10
    elif bowls[index + 3] == "/":
        return 10
    else:
        return int(bowls[index + 2]) + int(bowls[index + 3])


bowls = input()
print(calculate_bowling_score(bowls))