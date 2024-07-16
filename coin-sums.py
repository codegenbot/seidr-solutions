def coin_sums(cents):
    if cents < 1:
        return "Please enter a value greater than or equal to 1 cent."
    coins = [25, 10, 5, 1]
    results = []

    for coin in sorted(coins, reverse=True):
        result = cents // coin
        cents %= coin
        if result > 0:
            results.append(str(result))

    return "\n".join(results)