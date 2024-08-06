def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = []

    for coin in coins:
        count = cents // coin
        coin_counts.append(count)
        cents %= coin

    return (cents, *coin_counts)


cents = int(input())
print(*coin_sums(cents))