```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents // 1
    nickels = cents // 5 - pennies * (len(coins) - 2)
    dimes = cents // 10 - pennies * (len(coins) - 1) - nickels * (len(coins) - 2)
    quarters = cents // 25 - pennies * (len(coins) - 1) - nickels * (len(coins) - 2) - dimes * (len(coins) - 3)
    return pennies, nickels, dimes, quarters

cents = int(input())
pennies, nickels, dimes, quarters = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)