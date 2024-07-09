def coin_sums(cents):
    coins = [25, 10, 5, 1]  
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = int(cents / coins[i])
        cents %= coins[i]
        while count > 0:
            result[i] += 1
            count -= 1

    return tuple(result)