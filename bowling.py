def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10 + get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10
            score += int(bowls[bowl_index])
            bowl_index += 2
        else:
            if bowls[bowl_index].isdigit() and bowls[bowl_index + 1].isdigit():
                score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            else:
                bowl_index += 1
        frame += 1
    return score