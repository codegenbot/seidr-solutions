def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = []
    for coin in coins:
        coin_counts.append(cents // coin)
        cents %= coin
    return *coin_counts


cents = int(input())
print(*coin_sums(cents))