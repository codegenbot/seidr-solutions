```
coins = [25, 10, 5, 1]
amount = int(input("Enter the amount in cents: "))
quarters, nickels, dimes, pennies = divmod(amount, 25), divmod((amount % 25) // 5, 10), divmod(((amount % 25) % 5) * 10, 1)
print(f"Quarters: {quarters[0]}")
print(f"Nickels: {nickels[0]}")
print(f"Dimes: {nickels[1]}")
print(f"Pennies: {pennies[1]}")