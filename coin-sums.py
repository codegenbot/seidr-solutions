```
amount = int(input("Enter the number of cents: "))
quarters = amount // 25
remaining_amount = amount % 25
nickles = remaining_amount // 5
remaining_amount %= 5
dimes = remaining_amount // 10
pennies = remaining_amount % 10

print(f"Quarters: {quarters}")
print(f"Nickels: {nickles}")
print(f"Dimes: {dimes}")
print(f"Pennies: {pennies}")