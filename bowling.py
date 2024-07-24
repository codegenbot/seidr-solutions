def get_strike_bonus(bowls, index):
    bonus = 10

    if bowls[index] == "X":
        bonus += get_strike_bonus(bowls, index + 1)

        if index + 1 < len(bowls):
            if bowls[index + 1] == "X":
                bonus += 10
                if index + 2 < len(bowls):
                    bonus += (
                        10
                        if bowls[index + 2] == "X" or bowls[index + 2] == "/"
                        else int(bowls[index + 2])
                    )
            elif bowls[index + 1] == "/":
                bonus += 10
            else:
                bonus += int(bowls[index + 1])

    return bonus

def calculate_bowling_score(bowls):
    score = 0
    index = 0

    for frame in range(10):
        if bowls[index] == "X":  # Strike
            score += 10 + get_strike_bonus(bowls, index + 1)
            index += 1
        elif bowls[index + 1] == "/":  # Spare
            score += 10
        else:
            score += int(bowls[index]) + int(bowls[index + 1])

        index += 2

    if bowls[-3] == "X" or bowls[-2] == "X" or bowls[-1] == "X":
        score += get_strike_bonus(bowls, -3)
    
    return score

bowls = input("Enter the bowling sequence: ")
print(calculate_bowling_score(bowls))