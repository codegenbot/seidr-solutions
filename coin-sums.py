def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins[::-1]:
        count = cents // coin
        cents %= coin
        result.extend([count, 0, 0, 0])
    return tuple(result)


cents = int(input())
print(*coin_sums(cents))