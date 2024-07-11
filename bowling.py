def calculate_bowling_score(bowls):
    total_score = 0
    frame = 1
    ball = 1
    index = 0

    while frame <= 10:
        if bowls[index] == "X":
            total_score += 10
            total_score += get_strike_bonus(bowls, index)[0]
            index += 1
            ball = 1
            frame += 1
        elif bowls[index] == "/":
            total_score += 10 - int(bowls[index - 1])
            total_score += int(bowls[index + 1])
            index += 2
            ball = 1
            frame += 1
        else:
            total_score += int(bowls[index])
            if ball == 1:
                ball = 2
            else:
                ball = 1
                frame += 1
            index += 1

    return total_score