def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10 + bonus(bowls, bowl_index + 1, 2)
            bowl_index += 1
        elif bowls[bowl_index] == "/":
            score += 10 - int(bowls[bowl_index - 1]) + bonus(bowls, bowl_index + 1, 1)
        else:
            score += int(bowls[bowl_index])
        if bowls[bowl_index] != "X":
            bowl_index += 1
        if bowls[bowl_index - 1] == "X" or bowls[bowl_index - 1] == "/":
            frame += 1
    return score


def bonus(bowls, start_index, num_bowls):
    bonus_score = 0
    index = start_index
    while num_bowls > 0:
        if bowls[index] == "X":
            bonus_score += 10
        elif bowls[index] == "/":
            bonus_score += 10 - int(bowls[index - 1])
        else:
            bonus_score += int(bowls[index])
        index += 1
        num_bowls -= 1
    return bonus_score


bowls = input()
print(bowling_score(bowls))