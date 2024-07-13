def coin_sums(cents):
    coins = [25, 10, 5, 1]
    remaining_cents = cents
    coin_counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = min(remaining_cents // coins[i], 99)
        coin_counts[i] = count
        remaining_cents %= coins[i]

    return coin_counts


cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)

print(quarters)
print(nickles)
print(dimes)
print(pennies)