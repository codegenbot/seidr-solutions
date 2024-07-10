def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies_per_coin = [4, 2, 1, 1]
    result = []

    for i in range(len(coins)):
        count = int(cents // coins[i])
        cents %= coins[i]
        result.append(count)

    return result