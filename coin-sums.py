def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    pennies_per_coin = [4, 2, 1, 1]

    for i in range(cents):
        print(coins[0], end=" ")
    for i in range(len(pennies_per_coin) - 1):
        while cents >= coins[i]:
            cents -= coins[i]
            print(pennies_per_coin[i], end=" ")
    if cents > 0:
        print(cents)
    else:
        print()


coin_sums()