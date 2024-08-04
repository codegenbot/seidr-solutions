def bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == 'X':
            score += 10 + bonus(bowls, i + 1, 2)
            i += 1
        elif bowls[i + 1] == '/':
            score += 10 + bonus(bowls, i + 2, 1)
            i += 2
        else:
            score += int(bowls[i]) + int(bowls[i + 1])
            i += 2
        frame += 1
    return score

def bonus(bowls, index, num):
    bonus_score = 0
    for i in range(num):
        if bowls[index] == 'X':
            bonus_score += 10
        elif bowls[index] == '/':
            bonus_score += 10 - int(bowls[index - 1])
        else:
            bonus_score += int(bowls[index])
        index += 1
    return bonus_score

bowls = input()
print(bowling_score(bowls))