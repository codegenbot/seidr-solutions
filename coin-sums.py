def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return [(cents // coin, cents % coin) for coin in coins]

c = int(input())
quarters, dimes, nickles, pennies = zip(*[coin_sums(c)])
print(*quarters, *dimes, *nickles, *pennies)