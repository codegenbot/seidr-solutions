def get_strike_bonus(bowls, index):
    score = 10
    if bowls[index + 1] == "X":
        score += 10
        if bowls[index + 2] == "X":
            score += 10
            if bowls[index + 3] != "X":
                score += int(bowls[index + 3])
        elif bowls[index + 2] == "/":
            score += 10
        else:
            score += int(bowls[index + 2])

        index += 1

    elif bowls[index + 1] == "/":
        score += 10 - int(bowls[index])

    else:
        score += int(bowls[index + 1])
        if bowls[index + 2] != "-":
            score += int(bowls[index + 2])

    index += 2

    return score, index

def calculate_bowling_score(bowls):
    score = 0
    index = 0
    for _ in range(10):
        if bowls[index] == "X":
            bonus, index = get_strike_bonus(bowls, index)
            score += bonus
        elif bowls[index + 1] == "/":
            score += 10
            if bowls[index + 2] != "-":
                score += int(bowls[index + 2])
            index += 2
        else:
            score += int(bowls[index]) + int(bowls[index + 1])
            index += 2

    return score

bowls = input("Enter the sequence of bowls: ")
print(calculate_bowling_score(bowls))