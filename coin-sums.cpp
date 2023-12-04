[PYTHON]
def coin_sums(n):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(n):
        coin = coins[i % 4]
        if coin == 25:
            counts[3] += 1
            i += 3
        else:
            counts[coin - 1] += 1
    return counts
[/PYTHON]
[TESTS]
# Test case 1:
assert coin_sums(1) == [1, 0, 0, 0]
# Test case 2:
assert coin_sums(2) == [2, 0, 0, 0]
# Test case 3:
assert coin_sums(3) == [3, 0, 0, 0]
# Test case 4:
assert coin_sums(4) == [4, 0, 0, 0]
# Test case 5:
assert coin_sums(5) == [0, 1, 0, 0]
# Test case 6:
assert coin_sums(8612) == [8612, 0, 0, 0]
[/TESTS]
