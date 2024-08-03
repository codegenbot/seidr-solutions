def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    res = []

    for coin in coins:
        count = cents // coin
        res.append(count)
        cents %= coin

    return " ".join(map(str, res))