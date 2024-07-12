def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins:
        count = cents // coin
        while count > 0:
            result.append(count)
            cents %= coin
            count = cents // coin
    return tuple(result)

cents = int(input())
print(*coin_sums(cents))