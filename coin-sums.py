```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents // 1
    nickels = cents // 5 - pennies * (coins[2] // 1)
    dimes = cents // 10 - pennies * (coins[2] // 1) - nickels * (coins[1] // 1)
    quarters = cents // 25 - pennies * (coins[2] // 1) - nickels * (coins[1] // 1) - dimes * (coins[0] // 1)
    return pennies, nickels, dimes, quarters

cents = int(input())
pennies, nickels, dimes, quarters = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)