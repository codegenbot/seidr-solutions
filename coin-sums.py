```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []

    for i, coin in enumerate(coins, 1):
        count = cents // coin
        result.append(str(count))
        cents %= coin

    return '\n'.join(result)

cents = int(input())
print(coin_sums(cents))