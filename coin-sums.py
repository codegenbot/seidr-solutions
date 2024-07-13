amount = int(input("Enter amount in cents: "))
quart, remainder = divmod(amount, 25)
nickles = divmod(remainder, 5)
dimes, pennies = divmod(nickles[1], 10), nickles[1]%10
print(f"Quarters: {quart[0]}")
print(f"Nickels: {nickles[0]}")
print(f"Dimes: {dimes[0]}")
print(f"Pennies: {pennies}")