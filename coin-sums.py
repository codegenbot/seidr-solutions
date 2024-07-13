```
amount = int(input("Enter the number of cents: "))
quarters = amount // 25
remainder = amount % 25
nickles = remainder // 5
dimes = nickles // 10
pennies = nickles % 10
print(f"Quarters: {quarters}")
print(f"Nickels: {nickles}")
print(f"Dimes: {dimes}")
print(f"Pennies: {pennies}")