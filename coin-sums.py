def coin_sums(cents):
    coins = {
        25: 0,
        10: 0,
         5: 0,
         1: 0
    }

    while cents > 0:
        if cents >= 25:
            coins[25] += 1
            cents -= 25
        elif cents >= 10:
            coins[10] += 1
            cents -= 10
        elif cents >= 5:
            coins[5] += 1
            cents -= 5
        else:
            coins[1] += 1
            cents -= 1

    return coins[25], coins[10], coins[5], coins[1]