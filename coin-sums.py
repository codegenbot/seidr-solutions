def coin_sums():
    cents = int(input())
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents
    return quarters, dimes, nickles, pennies

result = coin_sums()
print("Quarters: ", result[0])
print("Dimes: ", result[1])
print("Nickels: ", result[2])
print("Pennies: ", result[3])