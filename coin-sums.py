'''
coins = [25, 10, 5, 1]
amount = int(input("Enter the amount in cents: "))
quarters, nickels = divmod(amount, 25), divmod((amount % 25) // 5, 10)
dimes, pennies = divmod(nickels[1] * 10, 10), divmod(amount % 5, 1)
print(f"Quarters: {quarters[0]}")
print(f"Nickels: {nickels[0]}")
print(f"Dimes: {dimes[0]}")
print(f"Pennies: {pennies[0]}")