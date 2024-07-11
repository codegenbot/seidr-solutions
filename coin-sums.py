```
cents = int(input("Enter the number of cents: "))
coins = [0, 0, 0, 0]
values = [25, 10, 5, 1]
for value in values:
    count = cents // value
    if count > 0:
        coins[values.index(value)] += count
        cents %= value

print(f"Pennies: {coins[3]}, Nickels: {int(coins[2] / 5)}, Dimes: {int(coins[1] / 10)}, Quarters: {int(coins[0] / 25)}")