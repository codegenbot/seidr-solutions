def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        count = cents // coin
        if count > 0:
            results[i] = count
            cents -= count * coin

    return tuple(results)

cents = int(input())
print(*coin_sums(cents))