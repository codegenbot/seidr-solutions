[PYTHON]
def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            if cents == coins[i]:
                counts[i] += 1
                break
            else:
                cents -= coins[i]
                counts[i] += 1
    return counts
[/PYTHON]
[TESTS]
# Test case 1:
assert get_coin_sums(1) == [1, 0, 0, 0]
# Test case 2:
assert get_coin_sums(5) == [0, 1, 0, 0]
# Test case 3:
assert get_coin_sums(10) == [0, 0, 1, 0]
# Test case 4:
assert get_coin_sums(25) == [0, 0, 0, 1]
# Test case 5:
assert get_coin_sums(30) == [0, 0, 0, 1, 1]
[/TESTS]
