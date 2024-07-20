def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return [[cents // coin + (cents % coin > 0), cents % coin] if cents >= coin else [0, 0] for coin in coins]


cents = int(input())
print(*coin_sums(cents))