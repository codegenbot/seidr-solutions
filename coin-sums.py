def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return [(cents // coin, cents % coin) for coin in coins]


c = int(input())
pennies, nickles, dimes, quarters = (coin[0] for coin in zip(*map(coin_sums(c))))
print(quarters, dimes, nickles, pennies)