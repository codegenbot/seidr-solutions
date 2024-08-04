def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            results.append(count)
            cents %= coin

    return str(results[0]) + "\n" + " ".join(map(str, results[1:]))