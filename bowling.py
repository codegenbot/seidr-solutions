def handle_bonus(bowls, score):
    def get_strike_bonus(bowls, frame):
        if bowls[frame] == "X":
            return 10
        elif bowls[frame].isdigit():
            return int(bowls[frame])
        return 0

    bonus = sum(map(lambda x: 10 if x == "X" else 0, bowls[:-2]))

    if bowls[9] == "X" or bowls[9] == "/" or bowls[9] == "-":
        bonus += get_strike_bonus(bowls, 10)

    score += bonus

    for i in range(9):
        if bowls[i] == "/":
            score += 10 - int(bowls[i - 1])
        elif bowls[i] == "X":
            score += 10 + get_strike_bonus(bowls, i + 1) + get_strike_bonus(bowls, i + 2)
        elif bowls[i].isdigit():
            score += int(bowls[i])

    return score

input_bowls = input("Enter the bowling sequence: ")
result = handle_bonus(input_bowls, 0)
print(result)