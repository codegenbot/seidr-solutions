```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents // 1
    nickels = (cents % 100) // 5
    dimes = ((cents % 100) % 50) // 10
    quarters = (cents // 25)
    return quarters, nickels, dimes, pennies

cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickels)
print(dimes)
print(pennies)