def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += (
                10 + get_value(bowls, bowl_index + 1) + get_value(bowls, bowl_index + 2)
            )
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10 + get_value(bowls, bowl_index + 2)
            bowl_index += 2
        else:
            score += get_value(bowls, bowl_index) + get_value(bowls, bowl_index + 1)
            bowl_index += 2
        frame += 1
    return score


def get_value(bowls, index):
    if bowls[index] == "X":
        return 10
    elif bowls[index] == "/":
        return 10 - int(bowls[index - 1])
    elif bowls[index] == "-":
        return 0
    else:
        return int(bowls[index])


bowls = input()
print(bowling_score(bowls))