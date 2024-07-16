def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for _ in sorted(coins, reverse=True):
        count = cents // 25
        if count > 0:
            results.append(f"{count} quarters")
            cents %= 25
        count = cents // 10
        if count > 0:
            results.append(f"{count} dimes")
            cents %= 10
        count = cents // 5
        if count > 0:
            results.append(f"{count} nickels")
            cents %= 5
        count = cents
        if count > 0:
            results.append(f"{count} pennies")

    return "\n".join(results)