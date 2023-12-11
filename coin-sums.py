[PYTHON]
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = {}
    for coin in coins:
        count = 0
        while cents >= coin:
            cents -= coin
            count += 1
        if count > 0:
            counts[coin] = count
    return counts
[/PYTHON]
[TESTS]
# Test case 1:
assert coin_sums(50) == {1: 5, 5: 0, 10: 0, 25: 0}
# Test case 2:
assert coin_sums(51) == {1: 5, 5: 1, 10: 0, 25: 0}
# Test case 3:
assert coin_sums(55) == {1: 5, 5: 1, 10: 0, 25: 0}
# Test case 4:
assert coin_sums(60) == {1: 5, 5: 1, 10: 1, 25: 0}
# Test case 5:
assert coin_sums(66) == {1: 6, 5: 1, 10: 1, 25: 0}
[/TESTS]
