def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    outputs = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            outputs[i] += 1

    return outputs[0], outputs[1], outputs[2], outputs[3]