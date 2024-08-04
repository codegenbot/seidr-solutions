def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        while cents >= coin:
            cents -= coin
            results.append(1)
        if cents < 0:
            break
        results.append(0)

    return len(results) - 1, *results[1:]


print(*coin_sums())