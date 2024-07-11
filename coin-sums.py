cents = int(input("Enter the number of cents: "))
coins = [0, 0, 0, 0]
values = [25, 10, 5, 1]
coins[0] += cents // 25
coins[1] += (cents % 25) // 10
coins[2] += ((cents % 10) % 5) // 5
coins[3] += cents % 5

print(
    f"Quarters: {coins[0]}, Dimes: {coins[1]}, Nickels: {coins[2]}, Pennies: {coins[3]}"
)