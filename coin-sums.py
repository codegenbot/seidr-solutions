def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = []

    for coin in coins:
        count = cents // coin
        cents %= coin
        result.append(count)

    return tuple(result)


print(*coin_sums(), sep="\n")