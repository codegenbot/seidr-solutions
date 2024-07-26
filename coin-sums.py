def coin_sums(cents):
    coins = [0, 0, 0, 0]
    for coin in [25, 10, 5, 1]:
        while cents >= coin:
            cents -= coin
            coins[3] += 1 if coin == 1 else (coins[2] += 1 if coin == 5 else (coins[1] += 1 if coin == 10 else coins[0] += 1))
    return tuple(coins)