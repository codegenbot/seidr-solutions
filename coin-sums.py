```
cents = int(input("Enter the number of cents: "))
coins = [0, 0, 0, 0]
while cents > 0:
    if cents >= 25:
        coins[3] += 1
        cents -= 25
    elif cents >= 10:
        coins[2] += 1
        cents -= 10
    elif cents >= 5:
        coins[1] += 1
        cents -= 5
    else:
        coins[0] += 1
        cents -= 1

print(f"Pennies: {coins[3]}, Nickels: {coins[2]}, Dimes: {coins[1]}, Quarters: {coins[0]}")