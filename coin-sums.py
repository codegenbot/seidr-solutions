def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    coins.sort(reverse=True)
    for coin in coins:
        count = cents // coin
        if count > 0:
            result[coins.index(coin)] += count
            cents %= coin

    return (
        f"{result[0]} quarter{'s' if result[0] > 1 else ''}",
        f"{result[1]} dime{'s' if result[1] > 1 else ''}",
        f"{result[2]} nickel{'s' if result[2] > 1 else ''}",
        f"{result[3]} penny{'s' if result[3] > 1 else ''}"
    )