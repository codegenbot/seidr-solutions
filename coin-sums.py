def coin_sums():
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    cents = int(input("Enter number of cents: "))

    while cents > 0:
        for i in range(len(coins)):
            if cents >= coins[i]:
                result[i] += 1
                cents -= coins[i]
            else:
                break

    print(f"Quarters: {result[0]}, Dimes: {result[1]}, Nickels: {result[2]}, Pennies: {result[3]}")

coin_sums()