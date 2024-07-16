def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return [
        (
            (coins[i], cents // coins[i])
            if i < len(coins)
            else (0, cents - sum([cents // coin for coin in coins[:i]]))
        )
        for i in range(len(coins))
    ][::-1]


c = int(input())
print(*coin_sums(c))