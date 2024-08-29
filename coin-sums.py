def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return min([(cents // coin) + (cents % coin > 0), 0, 0, 0] for coin in coins)


print(*coin_sums(int(input())))