def get_strike_bonus(bowls, index):
    bonus = 10
    num_bonuses = 2 if index < 18 else 1
    while num_bonuses > 0 and index + 1 < len(bowls):
        if bowls[index + 1] == "X":
            bonus += 10
        elif bowls[index + 1] == "/":
            bonus += 10 - int(bowls[index])
        elif bowls[index + 1] != "-":
            bonus += int(bowls[index + 1])
        num_bonuses -= 1
    index += 1
    return bonus


print(get_strike_bonus("32XX7/534/X-66-1-", 2))