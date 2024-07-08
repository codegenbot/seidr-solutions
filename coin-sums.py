def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents
    nickels = cents // 5
    dimes = (cents // 10) % 3
    quarters = cents // 25
    remaining_cents = cents % 25
    while remaining_cents > 0:
        if remaining_cents >= 5 and nickels > 0:
            remaining_cents -= 5
            nickels -= 1
        elif remaining_cents >= 10 and dimes > 0:
            remaining_cents -= 10
            dimes -= 1
        else:
            remaining_cents -= 1
    return quarters, nickels, dimes, pennies

cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickels)
print(dimes)
print(pennies)