```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    while cents > 0:
        for i in range(len(coins)-1, -1, -1):
            if cents >= coins[i]:
                num_coins = cents // coins[i]
                counts[i] = num_coins
                cents %= coins[i]
                break

    return tuple(counts)