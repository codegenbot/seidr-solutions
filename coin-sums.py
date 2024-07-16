def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            result[i] += 1
            cents -= coins[i]
    
    return str(result[3]) + "\n" + str(result[2]) + "\n" + str(result[1]) + "\n" + str(result[0])