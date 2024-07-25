```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    coins_and_counts = ["quarters: {}".format(result[0]), "dimes: {}".format(result[1]), "nickles: {}".format(result[2]), "pennies: {}".format(result[3])]
    print("\n".join(coins_and_counts))