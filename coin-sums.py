def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            result[i] = count
            cents %= coins[i]

    result[3] += cents

    return " ".join(map(str, result))