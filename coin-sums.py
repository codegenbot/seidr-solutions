def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    quarters = cents // 25
    cents %= 25
    results[0] = quarters

    nickels = cents // 10
    cents %= 10
    results[1] = nickels

    dimes = cents // 5
    cents %= 5
    results[2] = dimes

    pennies = cents
    results[3] = pennies

    print(*reversed(results))