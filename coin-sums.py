def coin_sum(cents):
    denominations = [25, 10, 5, 1]
    coins = [0, 0, 0, 0]
    quarters = cents // 25
    cents %= 25
    nickels = cents // 5
    cents %= 5
    dimes = cents // 10
    cents %= 10
    pennies = cents
    return quarters, dimes, nickels, pennies

cents = int(input("Enter the number of cents: "))
quarters, dimes, nickels, pennies = coin_sum(cents)
print(f"{quarters} quarters, {dimes} dimes, {nickels} nickels, and {pennies} pennies")