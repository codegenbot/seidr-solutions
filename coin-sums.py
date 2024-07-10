def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            coins_divisible = min(cents // coins[i], len(range(coins[i], 0, -1)) and range(coins[i], 0, -1).index(coins[i]))
            counts[i] += coins_divisible
            cents -= coins_divisible * coins[i]

    return counts[3], counts[2], counts[1], counts[0]