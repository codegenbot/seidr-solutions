def coin_sums():
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    cents = int(input("Enter number of cents: "))
    for i in range(len(coins)):
        while cents >= coins[i]:
            quotient = cents // coins[i] 
            result[i] = quotient
            cents -= coins[i] * quotient

    print(f"Quarters: {result[0]}, Dimes: {result[1]}, Nickels: {result[2]}, Pennies: {result[3]}")

coin_sums()