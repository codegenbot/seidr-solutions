def calculate_bowling_score(bowls):
    score = 0
    index = 0

    for frame in range(10):
        if bowls[index] == "X":
            score += 10 + get_strike_bonus(bowls, index + 1)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10
        else:
            score += int(bowls[index]) if bowls[index] != "-" else 0
            score += int(bowls[index + 1]) if bowls[index + 1] != "/" and bowls[index + 1] != "-" else 0

        index += 2

    if len(bowls) >= 1 and bowls[-1] == "X":
        score += 10

    return score

def get_strike_bonus(bowls, index):
    bonus = 0

    if bowls[index] == "X":
        bonus += 10
        if index + 1 < len(bowls) and bowls[index + 1] == "X":
            bonus += 10
            if index + 2 < len(bowls) and bowls[index + 2] == "X":
                bonus += 10
            else:
                bonus += int(bowls[index + 2]) if bowls[index + 2] != "-" else 0
        else:
            bonus += int(bowls[index + 1]) if bowls[index + 1] != "-" else 0
    elif bowls[index] == "/":
        bonus += 10

    return bonus

# Test the code with the provided input
print(calculate_bowling_score("7/2/51727--24/17X33"))  # Output should be 92