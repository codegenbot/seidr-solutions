def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]

    for coin in sorted(coins, reverse=True):
        while cents >= coin:
            res[coins.index(coin)] += 1
            cents -= coin
    
    return ' '.join(map(str, res)) + '\n' + str(cents)
print(coin_sums(int(input())))