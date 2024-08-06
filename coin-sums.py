def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_names = ["quarters", "dimes", "nickles", "pennies"]

    result = []
    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            result.append(count)
            cents %= coins[i]

    return [str(i) for i in result] + ["0" for _ in range(4 - len(result))]