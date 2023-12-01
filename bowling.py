def calculate_score(bowls):
    score = 0
    frame = 1
    i = 0

    while frame <= 10:
        if bowls[i] == 'X':
            score += 10
            score += calculate_strike_bonus(bowls, i)
            i += 1
        elif bowls[i+1] == '/':
            score += 10
            score += calculate_spare_bonus(bowls, i)
            i += 2
        else:
            score += int(bowls[i]) + int(bowls[i+1])
            i += 2

        frame += 1

    return score

def calculate_strike_bonus(bowls, index):
    bonus = 0
    i = index + 1
    count = 0

    while count < 2:
        if bowls[i] == 'X':
            bonus += 10
            count += 1
        elif bowls[i] == '/':
            bonus += 10 - int(bowls[i-1])
            count += 1
        else:
            bonus += int(bowls[i])
            count += 1

        i += 1

    return bonus

def calculate_spare_bonus(bowls, index):
    bonus = 0
    i = index + 2

    if bowls[i] == 'X':
        bonus += 10
    else:
        bonus += int(bowls[i])

    return bonus

bowls = input()
print(calculate_score(bowls))