def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    coins = sorted(coins, reverse=True)
    result = []

    for coin in coins:
        result.append(cents // coin)
        cents %= coin

    return ' '.join(map(str, result))

print(coin_sums())