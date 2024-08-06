def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    num_coins = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            cents -= coin
            num_coins[coins.index(coin)] += 1

    return num_coins[3], num_coins[2], num_coins[1], num_coins[0]


print(*coin_sums(), sep="\n")