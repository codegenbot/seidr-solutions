amount = int(input("Enter the number of cents: "))

quart, amount = divmod(amount, 25)
nickles, amount = divmod(amount, 5)
dimes, nickels = divmod(nickles, 10)
pennies = amount

print(f"Quarters: {quart}")
print(f"Nickels: {nickles}")
print(f"Dimes: {dimes}")
print(f"Pennies: {pennies}")