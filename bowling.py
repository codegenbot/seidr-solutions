def bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == "X":
            score += 10
            score += get_value(bowls, i + 1)
            score += get_value(bowls, i + 2)
            i += 1
        elif bowls[i + 1] == "/":
            score += 10
            score += get_value(bowls, i + 2)
            i += 2
        else:
            score += int(bowls[i])
        i += 1
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