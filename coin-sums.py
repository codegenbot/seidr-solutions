```
cents = int(input("Enter the amount in cents: "))
coins = [0, 0, 0, 0] 

while cents > 0:
    if cents >= 25:
        coins[0] += 1
        cents -= 25
    elif cents >= 10:
        coins[1] += 1
        cents -= 10
    elif cents >= 5:
        coins[2] += 1
        cents -= 5
    else:
        coins[3] += 1
        cents -= 1

print(f"Quarters: {coins[0]}, Dimes: {coins[1]}, Nickels: {coins[2]}, Pennies: {coins[3]}")