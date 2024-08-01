def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = []

    for c in coins:
        count = int(cents // c)
        if count > 0:
            res.extend([count] + [0] * (len(coins) - coins.index(c)))
            cents %= c

    return res


cents = int(input())
print(*coin_sums(cents))