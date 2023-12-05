[PYTHON]
def get_coin_counts(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    while cents > 0:
        for i in range(len(coins)):
            if cents >= coins[i]:
                cents -= coins[i]
                counts[i] += 1
    return counts
[/PYTHON]
[TESTS]
# Test case 1:
assert get_coin_counts(37) == [0, 1, 1, 2]
# Test case 2:
assert get_coin_counts(100) == [4, 1, 1, 0]
# Test case 3:
assert get_coin_counts(75) == [3, 1, 0, 0]
[/TESTS]
