def bowling_score(rolls):
    score = 0
    frame = 1
    roll = 0
    while frame <= 10 and roll < len(rolls):
        if rolls[roll] == "X":
            score += 10 + get_value(rolls, roll + 1) + get_value(rolls, roll + 2)
            roll += 1
        elif rolls[roll] == "/":
            score += 10 - get_value(rolls, roll - 1) + get_value(rolls, roll + 1)
        else:
            score += int(rolls[roll])
        if rolls[roll] in "X/":
            frame += 1
        roll += 1
    return score


def get_value(rolls, position):
    if rolls[position] == "X":
        return 10
    elif rolls[position] == "/":
        return 10 - int(rolls[position - 1])
    else:
        return int(rolls[position])


rolls = input()
print(bowling_score(rolls))