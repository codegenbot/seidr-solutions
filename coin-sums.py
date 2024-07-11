cents = int(input("Enter the number of cents: "))
coins = [0, 0, 0, 0]
values = [25, 10, 5, 1]

for value in sorted(values, reverse=True):
    count = cents // value
    coins[values.index(value)] = count
    cents %= value

print(
    f"Pennies: {coins[3]}, Nickels: {coins[2]}, Dimes: {coins[1]}, Quarters: {coins[0]}"
)