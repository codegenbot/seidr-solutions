```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents // 1
    nickels = cents // 5 - pennies * (cents % 5) // 1
    dimes = cents // 10 - pennies * (cents % 10) // 5 - nickels * (cents % 10) // 1
    quarters = cents // 25 - pennies * (cents % 25) // 10 - nickels * (cents % 25) // 5 - dimes * (cents % 25) // 10
    return pennies, nickels, dimes, quarters

# get input from user
cents = int(input())

# call the function and print the output
pennies, nickels, dimes, quarters = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)