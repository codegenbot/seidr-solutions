def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10 + bonus(bowls, bowl_index + 1, 2)
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10 + bonus(bowls, bowl_index + 2, 1)
            bowl_index += 2
        else:
            score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            bowl_index += 2
        frame += 1
    return score


def bonus(bowls, start_index, num_bonuses):
    bonus_score = 0
    for i in range(start_index, start_index + num_bonuses):
        if bowls[i] == "X":
            bonus_score += 10
        elif bowls[i] == "/":
            bonus_score += 10 - int(bowls[i - 1])
        else:
            bonus_score += int(bowls[i])
    return bonus_score


bowls = input()
print(bowling_score(bowls))