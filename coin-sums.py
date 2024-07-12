```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins:
        result.append(str(cents // coin) + " x $0." + str(coin/100))
        cents %= coin
    return '\n'.join(result)

cents = int(input())
print(coin_sums(cents))