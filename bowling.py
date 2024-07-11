def calculate_bowling_score(rolls):
    score = 0
    frame = 1
    roll_index = 0

    for _ in range(10):
        if rolls[roll_index] == "X":
            score += 10 + sum(
                convert_to_int(rolls[roll_index + 1 : roll_index + 3], "X")
            )
            roll_index += 1
        elif rolls[roll_index + 1] == "/":
            score += 10 + convert_to_int(rolls[roll_index + 2], "/")
            roll_index += 2
        else:
            score += convert_to_int(rolls[roll_index], rolls[roll_index + 1])
            roll_index += 2

        frame += 1

    return score


def convert_to_int(roll, symbol):
    if roll == symbol:
        return 10
    elif roll == "-":
        return 0
    else:
        return int(roll)


rolls = input()
print(calculate_bowling_score(rolls))