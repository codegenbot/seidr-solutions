def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies

    quarters = cents // 25
    cents %= 25
    nickles = cents // 5
    cents %= 5
    dimes = cents // 10
    cents %= 10
    pennies = cents

    return quarters, nickles, dimes, pennies


quarters, nickles, dimes, pennies = coin_sums()
print(quarters)
print(nickles)
print(dimes)
print(pennies)