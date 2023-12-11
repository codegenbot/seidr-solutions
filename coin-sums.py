
[PYTHON]
def get_coin_sums(cents):
    # coins: penny, nickel, dime, quarter
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    if cents > 0:
        return [0, 0, 0, 0]
    else:
        return counts
[/PYTHON]
[TESTS]
# Test case 1:
assert get_coin_sums(796) == [1, 0, 2, 31]
# Test case 2:
assert get_coin_sums(100) == [1, 0, 1, 4]
# Test case 3:
assert get_coin_sums(50) == [0, 0, 0, 2]
# Test case 4:
assert get_coin_sums(25) == [0, 0, 1, 1]
# Test case 5:
assert get_coin_sums(10) == [0, 1, 0, 0]
[/TESTS]
