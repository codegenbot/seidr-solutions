def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    coins.sort(reverse=True)
    for c in coins:
        count = cents // c
        if count > 0:
            results[coins.index(c)] = count
            cents -= count * c

    return tuple(results)