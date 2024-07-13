```
amount = int(input("Enter the number of cents: "))

quarters, amount = divmod(amount, 25)
nickles, amount = divmod(amount, 5) if amount >= 5 else (0, 0)
dimes, amount = divmod(amount, 10) if amount >= 10 else (0, 0)
pennies = amount

print(f"Quarters: {quarters}")
print(f"Nickels: {nickles}")
print(f"Dimes: {dimes}")
print(f"Pennies: {pennies}")