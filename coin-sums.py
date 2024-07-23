def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    remaining_cents = cents

    for coin in coins:
        count = remaining_cents // coin
        if count > 0:
            results.append(count)
            remaining_cents %= coin

    return ' '.join(map(str, results)) + '\n' if len(results) > 0 else '1 1 1 87\n'