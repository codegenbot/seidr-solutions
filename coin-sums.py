
def coin_sums(cents):
    coins = (1, 5, 10, 25)
    counts = [int(cents / coin) for coin in coins]
    remaining = cents % coins[-1]
    for i in range(len(coins)):
        while remaining >= coins[i]:
            remaining -= coins[i]
            counts[i] += 1
    return counts