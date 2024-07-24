def handle_bonus(bowls, score):
    def get_strike_bonus(bowls, frame):
        if bowls[frame] == "X":
            return 10
        elif bowls[frame].isdigit():
            return int(bowls[frame])
        return 0

    def get_bonus(bowls, frame):
        bonus = 0

        if bowls[frame] == "X":
            bonus += get_strike_bonus(bowls, frame + 1) + get_strike_bonus(
                bowls, frame + 2
            )
        elif bowls[frame] == "/":
            bonus += get_strike_bonus(bowls, frame + 1)

        return bonus

    for i in range(10):
        if bowls[i] == "/":
            score += 10 - int(bowls[i - 1])
        elif bowls[i] == "X":
            score += 10 + get_bonus(bowls, i)
        elif bowls[i].isdigit():
            score += int(bowls[i])

    return score


input_bowls = input("Enter the bowling sequence: ")
result = handle_bonus(input_bowls, 0)
print(result)