def coin_sums(cents):
    coins = [25, 10, 5, 1]
    outputs = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            outputs[i] += 1

    return tuple(outputs)


cents = int(input())
print(*coin_sums(cents))