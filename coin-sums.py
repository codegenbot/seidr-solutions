def coin_sums(cents):
    coins = [1, 5, 10, 25]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    return " ".join(map(str, result))