def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []

    for i in range(cents // 25 + 1):
        remaining_cents = cents - i * 25
        results.append([i, remaining_cents // 10, remaining_cents % 10])

    min_coins = [0, 0, 0, 0]
    for result in results:
        if result[3] == 0 and sum(result[:3]) <= cents:
            if len(result) > len(min_coins):
                min_coins = list(result)

    return min_coins