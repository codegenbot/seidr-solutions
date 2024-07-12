def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10 and bowl_index < len(bowls):
        if bowls[bowl_index] == "X":
            score += (
                10
                + get_strike_bonus(bowls, bowl_index + 1)
                + get_strike_bonus(bowls, bowl_index + 2)
            )
            bowl_index += 1
        elif bowls[bowl_index] == "/":
            score += (
                10 - int(bowls[bowl_index - 1]) + get_spare_bonus(bowls, bowl_index + 1)
            )
            bowl_index += 1
        else:
            score += int(bowls[bowl_index])
        bowl_index += 1
        if bowls[bowl_index - 1] in "X/":
            frame += 1
    return score


def get_strike_bonus(bowls, index):
    if bowls[index] == "X":
        return 10
    elif bowls[index] == "/":
        return 10 - int(bowls[index - 1])
    else:
        return int(bowls[index])


def get_spare_bonus(bowls, index):
    if bowls[index] == "X":
        return 10
    else:
        return int(bowls[index])


bowls = input()
print(bowling_score(bowls))