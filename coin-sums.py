def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        cents //= coins[i]
        result[i] += cents // (coins[i] // 100)
        cents %= coins[i] // 100

    return result


cents = int(input())
print(*coin_sums(cents))