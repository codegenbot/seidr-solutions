def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in coins[::-1]:
        count = cents // coin 
        cents %= coin         
        result[coins.index(coin)] = count

    return result[3], result[2], result[1], result[0]