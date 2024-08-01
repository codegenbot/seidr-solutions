def coin_sums(cents):
    coins = [25, 10, 5, 1]
    output = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            output[i] += 1
    return tuple(output)


cents = int(input())
print(*coin_sums(cents))