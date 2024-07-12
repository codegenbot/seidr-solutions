```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    combinations = [[0, 0, 0, 0]]
    for coin in coins:
        new_combinations = []
        for combination in combinations:
            new_quarters, new_nickels, new_dimes, new_pennies = combination
            new_quarters += cents // coin
            remaining_cents = cents % coin
            new_nickels, new_dimes, new_pennies = divmod(remaining_cents, 5)
            new_combinations.append([new_quarters, new_nickels, new_dimes, new_pennies])
        combinations = new_combinations

    min_coins = min(combinations)
    return (*min(min_coins))

cents = int(input())
*, quarters, nickles, dimes, pennies = coin_sums(cents)

print(quarters)
print(nickles)
print(dimes)
print(pennies)