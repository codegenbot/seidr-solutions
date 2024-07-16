def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    pennies = cents // 1
    nickels = (cents // 5) - (pennies // 25)
    dimes = (cents // 10) - (nickels * 2 + pennies // 10)
    quarters = cents // 25
    print(pennies, nickels, dimes, quarters)


coin_sums()