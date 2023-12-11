def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    remaining = cents
    for i in range(len(coins)):
        while remaining >= coins[i]:
            remaining -= coins[i]
            counts[i] += 1
    return counts