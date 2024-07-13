amount = int(input("Enter the number of cents: "))

quart, remainder = divmod(amount, 25)
nickles, remainder = divmod(remainder, 5), remainder % 5
dimes, remainder = divmod(remainder, 10), remainder % 10
pennies = remainder

print(f"Quarters: {quart}")
print(f"Nickels: {nickles}")
print(f"Dimes: {dimes}")
print(f"Pennies: {pennies}")