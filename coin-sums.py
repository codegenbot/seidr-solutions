def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies

    for coin in coins:
        num_coins = cents // coin
        cents %= coin

        print(num_coins)


coin_sums()