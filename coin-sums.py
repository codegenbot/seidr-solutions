def get_coin_counts(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    return counts

# Test cases
assert get_coin_counts(1) == [1, 0, 0, 0]
assert get_coin_counts(2) == [2, 0, 0, 0]
assert get_coin_counts(3) == [3, 0, 0, 0]
assert get_coin_counts(4) == [4, 0, 0, 0]
assert get_coin_counts(5) == [0, 1, 0, 0]