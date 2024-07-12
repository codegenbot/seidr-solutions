```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coins.sort(reverse=True)
    result = []
    for coin in coins:
        count = cents // coin
        if count > 0:
            result.append(count)
            cents %= coin
    return tuple(result)

cents = int(input())
print(*coin_sums(cents))