def bowling_score(rolls):
    score = 0
    frame = 1
    roll = 0
    while frame <= 10:
        if rolls[roll] == "X":
            score += 10 + get_value(rolls, roll + 1) + get_value(rolls, roll + 2)
            roll += 1
        elif rolls[roll + 1] == "/":
            score += 10 + get_value(rolls, roll + 2)
            roll += 2
        else:
            score += get_value(rolls, roll) + get_value(rolls, roll + 1)
            roll += 2
        frame += 1
    return score


def get_value(rolls, index):
    if rolls[index] == "X":
        return 10
    elif rolls[index] == "/":
        return 10 - int(rolls[index - 1])
    elif rolls[index] == "-":
        return 0
    else:
        return int(rolls[index])


rolls = input()
print(bowling_score(rolls))