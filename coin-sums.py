def coin_sums():
    n = int(input())
    coins = [25, 10, 5, 1]
    res = []
    for coin in coins:
        count = n // coin
        n %= coin
        res.append(count)
    print(*res)


coin_sums()