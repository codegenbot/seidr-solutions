def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]

    for i in range(len(coins)):
        n = min(res[i], int(cents / coins[i]))
        cents -= n * coins[i]
        res[i] = n

    return res

cents = int(input())
print(*coin_sums(cents))