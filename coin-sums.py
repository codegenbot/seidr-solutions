def coin_sums(cents):
    coins = [25, 10, 5, 1]  
    result = [0, 0, 0, 0]
    
    for coin in sorted(coins)[::-1]:
        while cents >= coin:
            cents -= coin
            result[coins.index(coin)] += 1

    return tuple(result)