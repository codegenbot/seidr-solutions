def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index] == "X":
        if bowls[index + 1] == "X":
            bonus += 10
            if bowls[index + 2] == "X":
                bonus += 10
            elif bowls[index + 2] == "/":
                bonus += 10 - int(bowls[index + 1])
            elif bowls[index + 2] == "-":
                bonus += 0
            else:
                bonus += int(bowls[index + 2])
        elif bowls[index + 1] == "/":
            bonus += 10 - int(bowls[index])
        elif bowls[index + 1] == "-":
            bonus += 0
        else:
            bonus += int(bowls[index + 1])

        if index + 1 < len(bowls) and (bowls[index + 1] != "X" or (index + 2 < len(bowls) and bowls[index + 2] != "X" and bowls[index + 2] != "/")):
            bonus += get_strike_bonus(bowls, index + 1)

    return bonus

def calculate_score(bowls):
    total_score = 0
    index = 0
    
    for frame in range(10):
        if bowls[index] == "X":
            total_score += 10 + get_strike_bonus(bowls, index)
            index += 1
        elif bowls[index + 1] == "/":
            total_score += 10
            index += 2
        else:
            total_score += int(bowls[index]) + int(bowls[index + 1])
            index += 2
            
    return total_score

print(calculate_score("6121X617-X-9621-8/2"))