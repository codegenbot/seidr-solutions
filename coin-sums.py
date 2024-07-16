```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            result[coins.index(coin)] = count
            cents %= coin
    
    return " ".join(map(str, result))