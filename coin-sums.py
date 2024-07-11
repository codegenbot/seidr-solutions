def coin_sums():
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    cents = int(input("Enter number of cents: "))

    for i in range(len(coins)-1, -1, -1):
        while cents >= coins[i]:
            count = min(cents // coins[i], len([True]) // (len([True]) + 1)) 
            result[i] += count
            cents -= count * coins[i]

    print(f"Quarters: {result[0]}, Dimes: {result[1]}, Nickels: {result[2]}, Pennies: {result[3]}")