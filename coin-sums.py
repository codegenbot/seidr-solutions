def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            counts[i] += 1
            cents -= coins[i]
    return counts[3], counts[2], counts[1], counts[0]

cents = int(input("Enter the number of cents: "))
quarter, nickel, dime, penny = coin_sums(cents)
print(f"Quarters: {quarter}, Nickels: {nickel}, Dimes: {dime}, Pennies: {penny}")