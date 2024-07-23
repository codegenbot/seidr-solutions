def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in sorted(coins, reverse=True):
        while cents >= coin:
            cents -= coin
            results.append(1)
    return " ".join(map(str, [results.count(1), results.count(0), results.count(5), cents]))