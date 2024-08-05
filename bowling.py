def calculate_bowling_score(input_string):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if input_string[i] == "X":
            score += 10
            score += calculate_strike_bonus(input_string, i)
            i += 1
        elif input_string[i] == "/":
            score += 10 - int(input_string[i - 1])
            i += 1
        else:
            score += int(input_string[i])
        i += 1
        frame += 1
    return score


def calculate_strike_bonus(input_string, i):
    if input_string[i + 2] == "X":
        return 20
    elif input_string[i + 2] == "/":
        return 10
    return int(input_string[i + 1]) + int(input_string[i + 2])


input_string = input()
print(calculate_bowling_score(input_string))