def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]
    current_coins = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            current_coins[i] += 1

    return " ".join(map(str, current_coins))