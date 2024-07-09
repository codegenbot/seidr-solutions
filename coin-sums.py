def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    def add_coins(cents, i):
        if cents < coins[i]:
            return
        count = 1
        while cents >= coins[i]:
            cents -= coins[i]
            count += 1
        nonlocal result
        result[i] = count
        add_coins(cents, i + 1)

    add_coins(cents, 0)
    return (
        f"{result[0]} quarter{'s' if result[0] > 1 else ''}",
        f"{result[1]} dime{'s' if result[1] > 1 else ''}",
        f"{result[2]} nickel{'s' if result[2] > 1 else ''}",
        f"{result[3]} penny{'s' if result[3] > 1 else ''}"
    )