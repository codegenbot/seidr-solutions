```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for _ in range(4):
        for coin in coins[::-1]:  
            if coin <= cents:
                num_coins = int(cents / coin)
                cents %= coin
                result[coins.index(coin)] = num_coins

    return result

cents = int(input())
print(*coin_sums(cents), sep='\n')