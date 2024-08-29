def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    results = []
    for coin in coins:
        count = int(cents / coin)
        if count > 0:
            results.append(count)
            cents %= coin
        else:
            results.append(0)
    return results


print(*coin_sums(), sep="\n")