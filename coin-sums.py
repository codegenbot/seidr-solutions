def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]  # Calculate number of coins
        cents %= coins[i]  # Update remaining cents
        result[i] = count

    return result