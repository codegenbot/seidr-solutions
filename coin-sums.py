```"""
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents
    quarters = pennies // 25
    remaining_cents = pennies % 25
    nickels = remaining_cents // 5
    remaining_cents %= 5
    dimes = remaining_cents // 10
    remaining_cents %= 10
    while remaining_cents > 0:
        if remaining_cents >= 1:
            remaining_cents -= 1
    return quarters, nickels, dimes, pennies % 25

cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickels)
print(dimes)
print(pennies)
"""""