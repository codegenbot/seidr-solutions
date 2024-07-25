```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // (coins[i] // 100)
        if count > 0:
            cents %= (coins[i] // 100)
            result[i] = str(count)

    return [str(i) for i in result]


cents = int(input())
print(*coin_sums(cents))