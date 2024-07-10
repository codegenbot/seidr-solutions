def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    coin_names = ["quarters", "dimes", "nickles", "pennies"]

    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]

        print(count)


coin_sums()