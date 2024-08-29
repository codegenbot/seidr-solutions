def coin_sums(cents):
    coins = [25, 10, 5, 1]
    out = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = int(cents / coins[i])
            cents -= count * coins[i]
            out[i] += count

    return tuple(out)