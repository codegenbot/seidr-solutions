def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10
            score += get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index] == "/":
            score += 10 - int(bowls[bowl_index - 1])
            score += get_spare_bonus(bowls, bowl_index)
            bowl_index += 1
        else:
            if bowls[bowl_index] in ['-', 'F']:
                score += 0
            else:
                score += int(bowls[bowl_index])
        bowl_index += 1
        frame += 1
    return score


bowls = input()
print(bowling_score(bowls))