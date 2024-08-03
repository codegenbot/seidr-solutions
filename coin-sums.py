def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return_list = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            return_list[i] += 1
            cents -= coins[i]

    return tuple(return_list)


cents = int(input())
print(*coin_sums(cents))