[PYTHON]
def get_minimum_coins(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    return counts
[/PYTHON]
[TESTS]
# Test case 1:
assert get_minimum_coins(1) == [1, 0, 0, 0]
# Test case 2:
assert get_minimum_coins(2) == [2, 0, 0, 0]
# Test case 3:
assert get_minimum_coins(3) == [3, 0, 0, 0]
# Test case 4:
assert get_minimum_coins(4) == [4, 0, 0, 0]
# Test case 5:
assert get_minimum_coins(5) == [0, 1, 0, 0]
[/TESTS]
