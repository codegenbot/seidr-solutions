def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_names = ["quarters", "dimes", "nickles", "pennies"]

    for i in range(len(coins)):
        count = int(cents // coins[i])
        cents %= coins[i]

        print(count)

    if cents > 0:
        print(0, end=" ")
    for coin, name in zip([25, 10, 5, 1], ["quarters", "dimes", "nickles", "pennies"]):
        count = int(cents // coin)
        cents %= coin
        print(count, end=" ")
    print()