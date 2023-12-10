[PYTHON]
def get_minimum_coins(n):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(4):
        counts[i] = (n - counts[i-1]) // coins[i]
        n %= coins[i]
    return sum(counts)
[/PYTHON]
[TESTS]
# Test case 1:
assert get_minimum_coins(1) == 1
# Test case 2:
assert get_minimum_coins(2) == 2
# Test case 3:
assert get_minimum_coins(3) == 3
# Test case 4:
assert get_minimum_coins(4) == 4
# Test case 5:
assert get_minimum_coins(5) == 0
[/TESTS]
