def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins:
        count = cents // coin
        if count > 0:
            result.extend([count] + [0] * (len(coins) - coins.index(coin)))
            break
    return tuple(result)


cents = int(input())
print(*coin_sums(cents))