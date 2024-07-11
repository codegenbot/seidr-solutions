cents = int(input("Enter the amount in cents: "))
result = [cents // 25, (cents % 25) // 10, (cents % 10) // 5, cents % 5]
print(f"Quarters: {result[0]}, Dimes: {result[1]}, Nickels: {result[2]}, Pennies: {result[3]}")