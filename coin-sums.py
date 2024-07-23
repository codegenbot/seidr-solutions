```
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, cents = divmod(cents, 25)
    dimes, cents = divmod(cents, 10)
    nickels, cents = divmod(cents, 5)
    pennies = cents
    return quarters, dimes, nickels, pennies

cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
print(quarters)
print(dimes)
print(nickels)
print(pennies)
```