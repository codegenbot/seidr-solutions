def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]  # Calculate the number of times this coin fits into the remaining cents
        cents %= coins[i]  # Update the remaining cents
        counts[i] = count

    return counts[3], counts[2], counts[1], counts[0]