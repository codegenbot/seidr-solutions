def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []

    for coin in coins:
        result = cents // coin
        if result > 0:
            results.append(result)
            cents %= coin

    return results


print(*coin_sums(), sep="\n")