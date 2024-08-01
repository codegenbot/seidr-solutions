def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []

    for c in coins:
        r = cents // c
        results.append(r)
        cents %= c

    return tuple(map(str, results))


print(*coin_sums(), sep="\n")