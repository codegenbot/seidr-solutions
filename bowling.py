def handle_bonus(bowls, score):
    def get_strike_bonus(bowls, frame):
        bonus = 0
        if bowls[frame] == "X":
            bonus += 10
            if bowls[frame + 1] == "X":
                bonus += 10
                if bowls[frame + 2] == "X":
                    bonus += 10
                elif bowls[frame + 2].isdigit():
                    bonus += int(bowls[frame + 2])
            elif bowls[frame + 1].isdigit():
                bonus += int(bowls[frame + 1])
        return bonus

    bonus = sum(map(lambda x: 10 if x == "X" else 0, bowls[:-4]))

    if bowls[9] == "X":
        bonus += get_strike_bonus(bowls, 9)

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