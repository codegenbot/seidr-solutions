def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    coins.sort(reverse=True)
    for coin in coins:
        count = cents // coin
        result[coins.index(coin)] = count
        cents -= coin * count

    return result


cents = int(input())
print(*coin_sums(cents))