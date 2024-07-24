def coin_sums(cents):
    coins = sorted([25, 10, 5, 1], reverse=True)
    count = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count[i] += 1
            cents -= coins[i]

    return tuple(count)


cents = int(input())
print(*coin_sums(cents))