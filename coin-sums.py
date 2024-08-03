def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coins_names = ["quarters", "dimes", "nickles", "pennies"]

    result = [0] * 4

    for i in range(4):
        while cents >= coins[i]:
            result[i] += 1
            cents -= coins[i]

    return tuple(result)