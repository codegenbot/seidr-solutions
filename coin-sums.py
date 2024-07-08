def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in coins:  
        result[coins.index(coin)] = int(cents / coin)
        cents %= coin
        cents %= (cents % coin)

    return result

print(*coin_sums(int(input())), sep='\n')