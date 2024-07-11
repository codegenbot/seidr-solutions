def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 1] == "/":
        bonus = 10
    else:
        bonus = int(bowls[index + 1]) + int(bowls[index + 2])
        if bowls[index + 2] == "-":
            bonus -= int(bowls[index + 2])
    return bonus

def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10 + get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif "/" in bowls[bowl_index:bowl_index + 2]:
            score += 10
            if bowls[bowl_index] == "/":
                score += 10
            else:
                score += int(bowls[bowl_index])
            bowl_index += 2
        else:
            score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            if bowls[bowl_index + 1] == "-":
                score -= int(bowls[bowl_index + 1])
            bowl_index += 2
        frame += 1
    return score

bowls = input()
print(bowling_score(bowls))