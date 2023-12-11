[PYTHON]
def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
            if cents % coins[i] == 0:
                break
    return counts
[/PYTHON]
[TESTS]
# Test case 1:
assert get_coin_sums(1) == [1, 0, 0, 0]
# Test case 2:
assert get_coin_sums(5) == [1, 0, 0, 0]
# Test case 3:
assert get_coin_sums(10) == [0, 1, 0, 0]
# Test case 4:
assert get_coin_sums(25) == [0, 0, 1, 0]
[/TESTS]
