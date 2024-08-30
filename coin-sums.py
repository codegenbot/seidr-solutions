def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    results = []

    for c in coins:
        count = cents // c
        if count > 0:
            results.append(count)
            cents %= c

    return str(results[0]) + "\n" + " ".join(map(str, results[1:]))


print(coin_sums())