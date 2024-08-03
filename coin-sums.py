Here is the solution:

def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    coin_counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            coin_counts[i] += 1
            cents -= coins[i]

    return str(coin_counts[3]) + "\n" + str(coin_counts[2]) + "\n" + str(coin_counts[1]) + "\n" + str(coin_counts[0])