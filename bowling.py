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
            if bowls[bowl_index + 1] == "-":
                score -= int(bowls[bowl_index])
            bowl_index += 2
        frame += 1
    return score


def bonus(bowls, index, num_bonuses):
    bonus_score = 0
    for _ in range(num_bonuses):
        if bowls[index] == "X":
            bonus_score += 10
        else:
            bonus_score += int(bowls[index])
        index += 1
    return bonus_score


bowls = input()
print(bowling_score(bowls))