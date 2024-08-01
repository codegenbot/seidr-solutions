def bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == "X":
            score += 10 + bonus(bowls[i + 1], bowls[i + 2])
            i += 1
        elif bowls[i + 1] == "/":
            score += 10 + bonus(bowls[i + 2])
            i += 2
        else:
            score += int(bowls[i]) + int(bowls[i + 1])
            i += 2
        frame += 1
    return score


def bonus(b1, b2=None):
    if b1 == "X":
        return 10
    elif b1 == "/":
        return 10 - int(b2)
    else:
        return int(b1)


bowls = input().strip()
print(bowling_score(bowls))