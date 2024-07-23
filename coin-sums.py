def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            results.append(count)
            cents %= coin

    return (
        " ".join(
            map(str, [cents // 25, (cents % 25) // 10, (cents % 10) // 5, cents % 5])
        )
        + "\n"
    )