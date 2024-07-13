amount = int(input("Enter the number of cents: "))
quart, remainder = divmod(amount, 25)
nickles, pennies = divmod(remainder, 5), remainder % 5
dimes, nickel_pennies = divmod(pennies, 10), pennies % 10
print(f"Quarters: {quart}")
print(f"Nickels: {nickles}")
print(f"Dimes: {dimes}")
if nickel_pennies > 0:
    print(f"Pennies: {nickel_pennies}")
else:
    print(f"Pennies: {pennies}")