```
cents = int(input("Enter the number of cents: "))
coins = [0, 0, 0, 0]  # quarters, dimes, nickels, pennies

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
        coins[3] += cents
        break

print("quarters: {}, dimes: {}, nickels: {}, pennies: {}".format(*coins))