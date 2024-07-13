def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remaining_cents = cents % 25
    dimes = remaining_cents // 10
    remaining_cents %= 10
    nickels = remaining_cents // 5
    pennies = remaining_cents % 5
    return quarters, dimes, nickels, pennies

cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
print(quarters)
print(dimes)
print(nickels)
print(pennies)