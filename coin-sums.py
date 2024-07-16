def coin_sums(cents):
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents
    return quarters, nickles, dimes, pennies

cents = int(input("Enter the number of cents: "))
quarters, nickles, dimes, pennies = coin_sums(cents)
print(f"Quarters: {quarters}")
print(f"Nickles: {nickles}")
print(f"Dimes: {dimes}")
print(f"Pennies: {pennies}")