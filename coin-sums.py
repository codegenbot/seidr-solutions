cents = int(input("Enter the number of cents: "))
coins = [0, 0, 0, 0]
values = [25, 10, 5, 1]

for value in sorted(values)[::-1]:
    count = cents // value
    coins[values.index(value)] += count
    cents %= value

print(
    f"Quarters: {coins[0]}, Dimes: {coins[1]}, Nickels: {coins[2]}, Pennies: {coins[3]}"
)