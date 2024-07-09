def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []

    for coin in coins:
        while cents >= coin:
            cents -= coin
            result.append(coin)

    return len(result), result.count(25), result.count(10), result.count(5)


cents = int(input())
print(*coin_sums(cents))