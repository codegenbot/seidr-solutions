def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            if cents - coins[i] < 0:
                return 0
            cents -= coins[i]
            counts[i] += 1
    return counts