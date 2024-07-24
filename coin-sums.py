```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in sorted(coins, reverse=True):
        count = cents // coin
        cents %= coin
        result[coins.index(coin)] += count

    return result


cents = int(input())
print(*coin_sums(cents))