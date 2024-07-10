```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        if cents >= coins[i]:
            counts[i] = cents // coins[i]
            cents %= coins[i]
        elif cents < coins[i] and cents >= 1:
            counts[3] = cents
            break

    return tuple(counts)