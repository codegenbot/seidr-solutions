[PYTHON]
def get_coin_sums(amount):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for coin in coins:
        if amount >= coin:
            counts[coin] += 1
            amount -= coin
    return counts
[/PYTHON]
[TESTS]
# Test case 1:
assert get_coin_sums(1) == [0, 0, 0, 1]
# Test case 2:
assert get_coin_sums(5) == [0, 0, 1, 1]
# Test case 3:
assert get_coin_sums(10) == [0, 1, 1, 1]
# Test case 4:
assert get_coin_sums(25) == [1, 1, 1, 1]
[/TESTS]
