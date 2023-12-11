def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    count = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            count[i] += 1
    return count