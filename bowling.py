def handle_bonus(bowls, score):
    def get_strike_bonus(bowls, frame):
        if bowls[frame] == "X":
            return 10
        elif bowls[frame] == "/":
            return 10 - int(bowls[frame-1])
        elif bowls[frame].isdigit():
            return int(bowls[frame])
        return 0

    bonus = sum(map(lambda x: 10 if x == "X" else 0, bowls[:-2]))
    if bowls[9] in ["X", "10"]:
        bonus += get_strike_bonus(bowls, 9)

    score += bonus

    for i in range(9):
        if bowls[i] == "/":
            score += 10 - int(bowls[i - 1])

    return score

input_bowls = input("Enter the bowling sequence: ")
result = handle_bonus(input_bowls, 0)
print(result)