def coin_sums(cents):
    coins = [25, 10, 5, 1]
    count = [0, 0, 0, 0]

    coins.sort(reverse=True)

    for i in range(len(coins)):
        while cents >= coins[i]:
            count[i] += 1
            cents -= coins[i]

    return tuple(count)


cents = int(input())
print(*coin_sums(cents))