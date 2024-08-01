def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies_needed = cents
    quarters_used = 0
    dimes_used = 0
    nickels_used = 0
    pennies_used = 0

    for coin in coins:
        while pennies_needed >= coin:
            pennies_needed -= coin
            if coin == 25:
                quarters_used += 1
            elif coin == 10:
                dimes_used += 1
            elif coin == 5:
                nickels_used += 1
            else:
                pennies_used += 1

    return quarters_used, dimes_used, nickels_used, pennies_used


cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
print(quarters)
print(dimes)
print(nickels)
print(pennies)