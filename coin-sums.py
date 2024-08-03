def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    num_coins = [0, 0, 0, 0]

    for i in range(4):
        while cents >= coins[i]:
            cents -= coins[i]
            num_coins[i] += 1

    return num_coins[0], num_coins[1], num_coins[2], num_coins[3]


print(*coin_sums(), sep="\n")