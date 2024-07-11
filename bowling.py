def get_strike_bonus(bowls, index):
    bonus = 10
    if index + 2 < len(bowls):
        if bowls[index + 1] == "X":
            bonus += 10
            if bowls[index + 2] == "X":
                bonus += 10
                if index + 3 < len(bowls):
                    if bowls[index + 3] == "X":
                        bonus += 10
                    else:
                        bonus += int(bowls[index + 3])
            elif bowls[index + 3] == "/":
                bonus += 10
            else:
                bonus += int(bowls[index + 2]) + int(bowls[index + 3])
        elif bowls[index + 2] == "/":
            bonus += 10
        else:
            bonus += int(bowls[index + 1]) + int(bowls[index + 2])
    return bonus

def get_bowling_score(bowls):
    score = 0
    index = 0
    for frame in range(10):
        if bowls[index] == "X":
            score += get_strike_bonus(bowls, index)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10 + int(bowls[index + 2])
            index += 2
        else:
            score += int(bowls[index]) + int(bowls[index + 1])
            index += 2
    return score

bowls = input("Enter the bowling sequence: ")
print(get_bowling_score(bowls))