def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = int(cents / coins[i])
            coin_counts[i] += count
            cents %= coins[i]

    return coin_counts[3], coin_counts[2], coin_counts[1], coin_counts[0]