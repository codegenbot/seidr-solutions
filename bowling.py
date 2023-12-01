def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    for i in range(len(bowls)):
        if frame > 10:
            break
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                score += calculate_strike_bonus(bowls[i+1], bowls[i+2])
            is_strike = True
            frame_score = 10
            frame += 1
        elif bowls[i] == '/':
            score += 10 - int(bowls[i-1])
            if frame < 10:
                score += calculate_spare_bonus(bowls[i+1])
            is_spare = True
            frame_score = 10
            frame += 1
        elif bowls[i] == '-':
            frame_score += 0
        else:
            score += int(bowls[i])
            frame_score += int(bowls[i])
            if is_strike:
                score += calculate_strike_bonus(bowls[i], bowls[i+1])
                is_strike = False
            elif is_spare:
                score += calculate_spare_bonus(bowls[i])
                is_spare = False
            if frame_score == 10:
                frame += 1
                frame_score = 0
    return score


def calculate_strike_bonus(bowl1, bowl2):
    bonus = 0
    if bowl1 == 'X':
        bonus += 10
    elif bowl1 == '/':
        bonus += 10 - int(bowl2)
    else:
        bonus += int(bowl1)
    return bonus


def calculate_spare_bonus(bowl):
    bonus = 0
    if bowl == 'X':
        bonus += 10
    else:
        bonus += int(bowl)
    return bonus


bowls = input()
print(calculate_bowling_score(bowls))