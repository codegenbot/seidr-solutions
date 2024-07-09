def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coins.sort(reverse=True)
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        result[i] = count
        cents -= coins[i] * count

    return result


cents = int(input())
print(*coin_sums(cents))