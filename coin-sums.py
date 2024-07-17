def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []

    for coin in coins:
        results.append(cents // coin)
        cents %= coin

    return results


print(*coin_sums(), sep="\n")