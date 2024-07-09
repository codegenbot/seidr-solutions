def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, nickels, dimes, pennies = 0, 0, 0, 0
    while cents > 0:
        if cents >= 25:
            quarters += cents // 25
            cents %= 25
        elif cents >= 10:
            dimes += cents // 10
            cents %= 10
        elif cents >= 5:
            nickels += cents // 5
            cents %= 5
        else:
            pennies = cents
    return quarters, nickels, dimes, pennies

cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickels)
print(dimes)
print(pennies)