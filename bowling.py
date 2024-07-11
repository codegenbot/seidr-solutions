def bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    for i in range(len(bowls)):
        if bowls[i] == "X":
            score += 10
            if frame < 10:
                score += get_strike_bonus(bowls, i)
            is_strike = True
            frame += 1
        elif bowls[i] == "/":
            score += 10 - frame_score
            if frame < 10:
                score += get_spare_bonus(bowls, i)
            is_spare = True
            frame += 1
        elif bowls[i] == "-":
            pass
        else:
            score += int(bowls[i])
            frame_score = int(bowls[i])
            if is_spare:
                is_spare = False
            if is_strike:
                is_strike = False
                if frame < 10:
                    score += get_strike_bonus(bowls, i)
            if frame % 2 == 0:
                frame += 1
    return score


def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 1] == "X":
        bonus += 10
        if bowls[index + 2] == "X":
            bonus += 10
        else:
            bonus += int(bowls[index + 2])
    else:
        bonus += int(bowls[index + 1])
        if bowls[index + 2] == "/":
            bonus += 10 - int(bowls[index + 1])
        elif bowls[index + 2] == "X":
            bonus += 10
        else:
            bonus += int(bowls[index + 2])
    return bonus


def get_spare_bonus(bowls, index):
    bonus = 0
    if bowls[index + 1] == "X":
        bonus += 10
    else:
        bonus += int(bowls[index + 1])
    return bonus


bowls = input()
print(bowling_score(bowls))