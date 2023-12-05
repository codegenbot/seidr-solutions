[PYTHON]
def get_min_coins(amount):
    coins = [1, 5, 10, 25, 50]
    counts = [0, 0, 0, 0]
    for coin in coins:
        if amount >= coin:
            counts[coin] += amount // coin
            amount %= coin
    return counts[1:]
[/PYTHON]
[TESTS]
# Test case 1:
assert get_min_coins(1) == [0, 0, 0, 1]
# Test case 2:
assert get_min_coins(5) == [0, 0, 1, 1]
# Test case 3:
assert get_min_coins(10) == [0, 1, 1, 1]
# Test case 4:
assert get_min_coins(25) == [0, 0, 0, 1]
# Test case 5:
assert get_min_coins(50) == [0, 0, 0, 1]
[/TESTS]
