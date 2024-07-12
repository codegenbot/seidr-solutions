def get_strike_bonus(bowls, index):
    bonus = 0
    if index + 2 < len(bowls) and bowls[index + 2] == "X":
        bonus += 10
        if index + 4 < len(bowls) and bowls[index + 4] == "X":
            bonus += 10
        else:
            bonus += int(bowls[index + 4]) if index + 4 < len(bowls) else 0
    else:
        bonus += get_frame_score(bowls, index + 2) if index + 2 < len(bowls) else 0
    return bonus

def get_spare_bonus(bowls, index):
    bonus = 0
    if index + 2 < len(bowls) and bowls[index + 2] == "X":
        bonus += 10
    else:
        bonus += int(bowls[index + 2]) if index + 2 < len(bowls) else 0
    return bonus

def get_frame_score(bowls, index):
    score = 0
    if index < len(bowls):
        if bowls[index] == "-":
            score += 0
        else:
            score += int(bowls[index])
    if index + 1 < len(bowls):
        if bowls[index + 1] == "-":
            score += 0
        elif bowls[index + 1] == "/":
            score += 10 - int(bowls[index]) if index < len(bowls) else 0
        else:
            score += int(bowls[index + 1])
    return score