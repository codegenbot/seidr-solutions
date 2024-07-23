```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        while cents >= coins[i]:
            result[3-coins.index(coins[i])] += 1
            cents -= coins[i]

    return result

cents = int(input())
print(*coin_sums(cents))