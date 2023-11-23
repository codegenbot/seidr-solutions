def bowling(bowls):
    score = 0
    frame = 1
    bowl_index = 0

    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10
            if frame < 10:
                score += get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index] == "/":
            score += get_spare_score(bowls, bowl_index)
            bowl_index += 2
        else:
            if bowls[bowl_index] != "-":
                score += int(bowls[bowl_index])
            bowl_index += 1

        frame += 1

    return score


def get_strike_bonus(bowls, bowl_index):
    bonus = 0
    bowl_index += 1

    for i in range(2):
        if bowls[bowl_index] == "X":
            bonus += 10
        elif bowls[bowl_index] == "/":
            bonus += 10 - int(bowls[bowl_index - 1])
        else:
            if bowls[bowl_index] != "-":
                bonus += int(bowls[bowl_index])

        bowl_index += 1

    return bonus


def get_spare_score(bowls, bowl_index):
    return 10 - int(bowls[bowl_index - 1])


bowls = input()
print(bowling(bowls))