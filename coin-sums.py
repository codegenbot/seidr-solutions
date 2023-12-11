[PYTHON]
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = {}
    for coin in coins:
        while cents >= coin:
            cents -= coin
            if coin not in counts:
                counts[coin] = 0
            counts[coin] += 1
    return counts
[/PYTHON]
[TESTS]
# Test case 1:
assert coin_sums(5) == {1: 5}
# Test case 2:
assert coin_sums(10) == {1: 10}
# Test case 3:
assert coin_sums(20) == {1: 20}
# Test case 4:
assert coin_sums(25) == {1: 25}
# Test case 5:
assert coin_sums(50) == {1: 50}
# Test case 6:
assert coin_sums(100) == {1: 100}
[/TESTS]
