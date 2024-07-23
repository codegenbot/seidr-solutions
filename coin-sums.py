def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    while cents >= 25:
        quarters = cents // 25
        results[0] += quarters
        cents %= 25

    while cents >= 10:
        nickles = cents // 10
        results[1] += nickles
        cents %= 10

    while cents >= 5:
        dimes = cents // 5
        results[2] += dimes
        cents %= 5

    pennies = cents
    results[3] = pennies

    print(*reversed(results))