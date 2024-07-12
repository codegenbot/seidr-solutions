```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = [0, 0, 0, 0]

    coins.sort(reverse=True)

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            coin_counts[i] += 1

    return tuple(coin_counts)


cents = int(input())
print(*coin_sums(cents))