def coin_sums():
    c = int(input())
    coins = [25, 10, 5, 1]
    res = []

    for coin in coins:
        cnt = c // coin
        c %= coin
        res.append(cnt)

    return " ".join(map(str, res))


print(coin_sums())