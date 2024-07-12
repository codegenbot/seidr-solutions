def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == "X":
            score += 10 + get_value(bowls[i + 1]) + get_value(bowls[i + 2])
            i += 1
        elif bowls[i + 1] == "/":
            score += 10 + get_value(bowls[i + 2])
            i += 2
        else:
            score += get_value(bowls[i]) + get_value(bowls[i + 1])
            i += 2
        frame += 1
    return score


def get_value(char):
    if char == "X":
        return 10
    elif char == "/":
        return 10 - get_value(char[-1])
    elif char == "-":
        return 0
    else:
        return int(char)


bowls = input()
print(calculate_bowling_score(bowls))