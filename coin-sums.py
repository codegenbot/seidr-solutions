def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    num_coins = []

    for coin in coins:
        num_coins.append(int(cents / coin))
        cents %= coin

    return tuple(num_coins)


cents = int(input())
print(*coin_sums(cents), sep="\n")