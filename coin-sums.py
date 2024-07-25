```
cents = int(input("Enter the amount in cents: "))
quarters = 0
dimes = 0
nickles = 0
pennies = 0

while cents > 25:
    quarters += 1
    cents -= 25

while cents >= 10:
    dimes += 1
    cents -= 10

while cents >= 5:
    nickles += 1
    cents -= 5

pennies = cents

print(f"Quarters: {quarters}\nDimes: {dimes}\nNickles: {nickles}\nPennies: {pennies}")