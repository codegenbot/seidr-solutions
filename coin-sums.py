[PYTHON]
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    return counts
pass
[/PYTHON]
[TESTS]
# Test case 1:
assert coin_sums(8496) == [8496, 0, 0, 0]
# Test case 2:
assert coin_sums(100) == [100, 0, 0, 0]
# Test case 3:
assert coin_sums(99) == [99, 0, 0, 0]
# Test case 4:
assert coin_sums(25) == [25, 0, 0, 0]
# Test case 5:
assert coin_sums(10) == [10, 0, 0, 0]
# Test case 6:
assert coin_sums(5) == [5, 0, 0, 0]
# Test case 7:
assert coin_sums(1) == [1, 0, 0, 0]
# Test case 8:
assert coin_sums(24) == [24, 0, 0, 0]
# Test case 9:
assert coin_sums(35) == [35, 0, 0, 0]
# Test case 10:
assert coin_sums(84) == [84, 0, 0, 0]
[/TESTS]
```