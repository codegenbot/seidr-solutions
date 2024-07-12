```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarter_count = cents // 25
    remaining_cents = cents % 25
    nickel_count = remaining_cents // 5
    remaining_cents %= 5
    dime_count = remaining_cents // 10
    remaining_cents %= 10
    penny_count = remaining_cents

    return quarter_count, nickel_count, dime_count, penny_count

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)

print(quarters)
print(nickles)
print(dimes)
print(pennies)