def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            res[i] = res[i] + 1
            cents -= coins[i]
        if cents > 0:
            break

    return res[:len(coins)]

cents = int(input())
print(*coin_sums(cents))