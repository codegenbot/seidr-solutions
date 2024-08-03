def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies

    for i in range(cents):
        print(coins[0], end=" ")
    for coin in coins[1:]:
        while cents >= coin:
            cents -= coin
            print(coin, end=" ")
    print()


coin_sums()