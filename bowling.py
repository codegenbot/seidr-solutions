def bowling(bowls):
    score = 0
    frame = 1
    i = 0

    while i < len(bowls):
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                score += get_strike_bonus(bowls[i+1], bowls[i+2])
            frame += 1
            i += 1
        elif bowls[i] == '/':
            score += 10 - int(bowls[i-1])
            if frame < 10:
                score += get_spare_bonus(bowls[i+1])
            frame += 1
            i += 1
        else:
            score += int(bowls[i])
            if frame < 10 and bowls[i+1] == '/':
                score += get_spare_bonus(bowls[i+2])
            frame += 1
            i += 1

    return score

def get_strike_bonus(bowl1, bowl2):
    if bowl1 == 'X':
        return 10
    elif bowl2 == '/':
        return 10 - int(bowl1)
    else:
        return int(bowl1) + int(bowl2)

def get_spare_bonus(bowl):
    if bowl == 'X':
        return 10
    else:
        return int(bowl)

bowls = input()
print(bowling(bowls))