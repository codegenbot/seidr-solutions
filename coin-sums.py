def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        count = cents // coin
        while count > 0 and cents >= coin:
            total_coins[i] += 1
            cents -= coin
            count -= 1

    return tuple(total_coins)