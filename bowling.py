def calculate_score(bowls):
    score = 0
    frame = 0
    i = 0
    while frame < 10:
        if bowls[i] == 'X':
            score += 10
            score += bonus(bowls, i, 2)
            i += 1
        elif bowls[i+1] == '/':
            score += 10
            score += bonus(bowls, i, 1)
            i += 2
        else:
            score += int(bowls[i])
            score += int(bowls[i+1])
            i += 2
        frame += 1
    return score

def bonus(bowls, i, num):
    bonus_score = 0
    for j in range(num):
        if bowls[i+j+1] == 'X':
            bonus_score += 10
        elif bowls[i+j+1] == '/':
            bonus_score += 10 - int(bowls[i+j])
        else:
            bonus_score += int(bowls[i+j+1])
    return bonus_score

bowls = input()
print(calculate_score(bowls))