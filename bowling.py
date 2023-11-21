def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    i = 0

    while frame <= 10:
        if bowls[i] == 'X':
            score += 10
            score += get_strike_bonus(bowls, i)
            i += 1
        elif bowls[i+1] == '/':
            score += 10
            score += get_spare_bonus(bowls, i)
            i += 2
        else:
            score += int(bowls[i]) + int(bowls[i+1])
            i += 2

        frame += 1

    return score


def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index+2] == 'X':
        bonus += 10
        if bowls[index+4] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[index+4])
    else:
        bonus += int(bowls[index+2]) + int(bowls[index+3])

    return bonus


def get_spare_bonus(bowls, index):
    bonus = 0
    if bowls[index+2] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[index+2])

    return bonus


bowls = input()
print(calculate_bowling_score(bowls))