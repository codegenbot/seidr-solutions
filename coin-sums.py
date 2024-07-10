```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    while cents > 0:
        for i in range(len(coins)):
            count = cents // coins[i]
            if count > 0:
                total_coins[i] = count
                cents -= coins[i] * count
                break

    return total_coins