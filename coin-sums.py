def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    outputs = []

    for i in range(len(coins)):
        outputs.append(cents // coins[i])
        cents %= coins[i]

    return outputs