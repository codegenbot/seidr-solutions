def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return min(
        [
            list(
                map(
                    int,
                    [
                        cents // coin + (cents % coin > 0),
                        cents % coin // coin,
                        cents % coin % coin,
                    ],
                )
            )
            for coin in coins
        ],
        key=lambda x: sum(x),
    )


cents = int(input())
print(*coin_sums(cents))