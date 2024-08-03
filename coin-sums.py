```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, nickles, dimes, pennies = 0, 0, 0, cents
    for coin in coins:
        while pennies >= coin:
            pennies -= coin
            if coin == 25:
                quarters += 1
            elif coin == 10:
                dimes += 1
            elif coin == 5:
                nickles += 1
    return quarters, nickles, dimes, pennies

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)