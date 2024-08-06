def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    coin_counts = [cents // coin for coin in coins]

    remaining_cents = cents % 25
    penny_count = remaining_cents

    print(coin_counts[3])  # number of pennies
    print(penny_count)  # number of pennies
    print(coin_counts[2])  # number of nickels
    print(coin_counts[1])  # number of dimes
    print(coin_counts[0])  # number of quarters