def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            results.append(count)
            cents -= count * coin
        else:
            results.append(0)

    return tuple(results)


print(*coin_sums(), sep="\n")