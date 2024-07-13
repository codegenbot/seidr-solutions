```
amount = int(input("Enter the number of cents: "))
quart, remainder = divmod(amount, 25)
nickles, pennies = divmod(remainder, 5), remainder % 5
dimes = remainder // 10
pennies = amount % 100
print(f"Quarters: {quart}")
print(f"Nickels: {nickles}")
print(f"Dimes: {dimes}")
print(f"Pennies: {pennies}")