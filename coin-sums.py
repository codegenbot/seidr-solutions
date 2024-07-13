def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0] * 4

    for coin in coins:
        while cents >= coin:
            cents -= coin
            res[coins.index(coin)] += 1

    return res


cents = int(input())
print(*coin_sums(cents))