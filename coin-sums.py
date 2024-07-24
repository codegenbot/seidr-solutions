def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            res[i] += 1
    return str(res[3]) + "\n" + str(res[2]) + "\n" + str(res[1]) + "\n" + str(res[0])


cents = int(input())
print(coin_sums(cents))