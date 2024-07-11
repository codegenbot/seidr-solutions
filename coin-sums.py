def coin_sums():
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    cents = int(input("Enter number of cents: "))

    while cents > 0:
        for i in range(len(coins)-1, -1, -1):
            count = min(cents // coins[i], result[i] + (cents % coins[i] == 0))
            result[i] = count
            cents -= count * coins[i]

    print(f"Quarters: {result[0]}, Dimes: {result[1]}, Nickels: {result[2]}, Pennies: {result[3]}")

coin_sums()