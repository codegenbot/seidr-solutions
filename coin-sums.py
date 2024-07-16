def coin_sums(cents):
    coins = [1, 5, 10, 25]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]
        result[i] = count

    return result


cents = int(input())
print(*coin_sums(cents))