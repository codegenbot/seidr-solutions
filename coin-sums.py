def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = []
    for coin in coins:
        count = cents // coin
        res.append(count)
        cents %= coin
    return tuple(res)


cents = int(input())
print(*coin_sums(cents))