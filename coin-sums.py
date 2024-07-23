def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    results[0], cents %= 25, results[1], cents //= 10
    results[2], cents %= 10, results[3], cents %= 5
    count = cents
    results[4], count %= 4

    print(*reversed(results))