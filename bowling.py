def get_strike_bonus(bowls, index):
    bonus = 0
    frame = 1
    bowl = 0

    while bowl < 21 and frame <= 10:
        if bowls[index] == "X":
            bonus += 10
            if frame < 10:
                bonus += get_strike_bonus(bowls, index + 1)

        elif bowls[index] == "/":
            bonus += 10 - int(bowls[index - 1])

        elif bowls[index] != "-":
            bonus += int(bowls[index])

        bowl += 1
        index += 1

        if bowls[index - 1] in ["X", "/"]:
            frame += 1

    return bonus


print(get_strike_bonus("32XX7/534/X-66-1-", 0))