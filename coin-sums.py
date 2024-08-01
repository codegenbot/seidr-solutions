def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = []
    for coin in coins:
        count = cents // coin
        if count > 0:
            coin_counts.append(count)
            cents %= coin
        else:
            coin_counts.append(0)
    return tuple(coin_counts)


cents = int(input())
print(*coin_sums(cents))