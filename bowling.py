def calculate_bowling_score(bowls):
    score = 0
    index = 0

    for i in range(10):
        if bowls[index] == "X":
            score += 10 + get_strike_bonus(bowls, index)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10 + int(bowls[index + 2])
            index += 2
        else:
            score += int(bowls[index]) + int(bowls[index + 1])
            index += 2

    return score


def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index] == "X":
        if bowls[index + 1] == "X":
            bonus += 10
        elif bowls[index + 1] == "/":
            bonus += 10 - int(bowls[index])
        else:
            bonus += int(bowls[index + 1])

        if index + 2 < len(bowls):
            bonus += get_strike_bonus(bowls, index + 1)

    return bonus


bowls = input("Enter the bowling sequence: ")
print(calculate_bowling_score(bowls))