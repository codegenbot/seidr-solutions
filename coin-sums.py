def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    output = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            output[i] += 1

    return " ".join(map(str, output))


print(coin_sums())