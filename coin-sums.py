def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return min(
        [coins.count(i) for _ in range(cents // max(coins))],
        default=[0, 0, 0, cents % max(coins)],
    )


cents = int(input())
print(*coin_sums(cents))