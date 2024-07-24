```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in sorted(coins, reverse=True):
        while cents >= coin:
            count = cents // coin
            result[coins.index(coin)] += count
            cents -= count * coin

    return result

cents = int(input())
print(*[str(x) for x in coin_sums(cents)])