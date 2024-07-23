```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i, c in enumerate(coins):
        count = cents // c
        if count > 0:
            counts[i] = count
            cents -= c * count

    return tuple(counts)

cents = int(input())
pennies, nickels, dimes, quarters = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)