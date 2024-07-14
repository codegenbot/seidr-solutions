def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins:
        result.append(int(cents // coin))
        cents %= coin
    return result + [0] * (4 - len(result))


cents = int(input())
print(*coin_sums(cents))