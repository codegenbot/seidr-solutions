def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return min(
        [
            list(
                map(
                    sum,
                    [
                        (
                            [coin // c, (coin % c) // d, (coin % c) % d]
                            if c != 1
                            else [(coin % c) // d, (coin % c) % d]
                        )
                        for d in coins[coins.index(c):]
                    ]
                )
            )
            for i, coin in enumerate([cents] + [x for x in range(cents - 24, -1, -1) if any(x // c for c in coins)])
        ],
        key=sum,
    )


print(*coin_sums(int(input())))