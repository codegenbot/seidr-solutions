def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents

    return str(quarters) + "\n" + str(dimes) + "\n" + str(nickles) + "\n" + str(pennies)