def bowling_score(bowls):
    score = 0
    frame = 1
    first_throw = True
    for i in range(len(bowls)):
        if bowls[i] == "X":
            score += 10
            if frame < 10:
                if bowls[i + 2] == "/":
                    score += 10
                else:
                    score += get_value(bowls[i + 1]) + get_value(bowls[i + 2])
            if not first_throw:
                frame += 1
            first_throw = True
        elif bowls[i] == "/":
            score += 10 - get_value(bowls[i - 1])
            if frame < 10:
                score += get_value(bowls[i + 1])
            if not first_throw:
                frame += 1
            first_throw = True
        else:
            score += get_value(bowls[i])
            if not first_throw:
                frame += 1
            first_throw = not first_throw
    return score


def get_value(char):
    if char == "-":
        return 0
    elif char == "X" or char == "/":
        return 10
    else:
        return int(char)


bowls = input()
print(bowling_score(bowls))