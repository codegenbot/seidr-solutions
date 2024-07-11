def coin_sums():
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    cents = int(input("Enter number of cents: "))

    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]
        result[i] = count

    print(f"Quarters: {result[0]}, Dimes: {result[1]}, Nickels: {result[2]}, Pennies: {result[3]}")

coin_sums()