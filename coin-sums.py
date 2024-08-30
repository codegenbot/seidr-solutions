```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters_needed = cents // 25
    remaining_cents = cents % 25
    dimes_needed = remaining_cents // 10
    remaining_cents %= 10
    nickels_needed = remaining_cents // 5
    remaining_cents %= 5
    pennies_needed = remaining_cents

    return quarters_needed, dimes_needed, nickels_needed, pennies_needed


cents = int(input())
quarters_needed, dimes_needed, nickels_needed, pennies_needed = coin_sums(cents)
print(quarters_needed)
print(dimes_needed)
print(nickels_needed)
print(pennies_needed)