def coin_sums(cents):
    quarters = cents // 25
    remaining = cents % 25
    dimes = remaining // 10
    remaining %= 10
    nickles = remaining // 5
    remaining %= 5
    pennies = remaining
    return str(quarters) + "\n" + str(dimes) + "\n" + str(nickles) + "\n" + str(pennies)