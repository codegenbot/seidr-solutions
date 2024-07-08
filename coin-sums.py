```
"""
Solve the following code contest problem: coin-sums.
Given a number of cents, find the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.

"""

def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remaining_cents = cents % 25
    nickels = remaining_cents // 5
    remaining_cents %= 5
    dimes = remaining_cents // 10
    remaining_cents %= 10
    pennies = remaining_cents

    return quarters, nickels, dimes, pennies


cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickels)
print(dimes)
print(pennies)