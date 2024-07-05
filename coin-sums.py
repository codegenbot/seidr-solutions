def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        res[i] = count
        cents -= count * coins[i]

    return res

cents = int(input())
print(*coin_sums(cents))