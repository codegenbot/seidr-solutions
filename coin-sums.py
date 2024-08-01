def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return min(
        [
            list(a)
            for a in itertools.product(
                range((cents + coin - 1) // coin), repeat=len(coins)
            )
            if sum([a[i] * coin for i, coin in enumerate(coins)]) == cents
        ]
    )


print(*coin_sums(int(input())))