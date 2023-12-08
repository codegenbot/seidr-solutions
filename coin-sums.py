def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]

    while cents > 0:
        for i in range(len(coins)):
            count = int(cents / coins[i])
            cents %= coins[i]
            counts[i] += count
        cents -= coins[i]

    return counts[::-1]