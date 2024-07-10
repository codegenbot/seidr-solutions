def coin_sums(cents):
    coins = [25, 10, 5, 1]
    min_count = float('inf')
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            remaining_cents = cents - coins[i] * count
            new_counts = list(counts)
            new_counts[i] = count
            min_count = min(min_count, coin_sums(remaining_cents) + tuple(new_counts))

    return (*min_count[:3], int(min_count[3]))