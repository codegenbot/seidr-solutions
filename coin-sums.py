def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    while cents > 0:
        for coin in coins:
            count = cents // coin
            if count > 0:
                result.append(count)
                cents %= coin
                break
    return tuple(result)


cents = int(input())
print(*coin_sums(cents))