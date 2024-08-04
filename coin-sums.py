def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(len(coins) + 1):
        if cents < sum(coins[:i]):
            break
        num_coins = int(math.floor((cents - sum(coins[: i - 1])) / coins[i - 1]))
        results.extend([num_coins] * i)
    return " ".join(map(str, results))