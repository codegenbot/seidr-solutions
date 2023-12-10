[PYTHON]
def get_coin_sums(cents):
    coins = [0] * 4
    while cents > 0:
        if cents >= 25:
            coins[3] += cents // 25
            cents %= 25
        elif cents >= 10:
            coins[2] += cents // 10
            cents %= 10
        elif cents >= 5:
            coins[1] += cents // 5
            cents %= 5
        else:
            coins[0] += cents
            cents = 0
    return coins
[/PYTHON]
[TESTS]
# Test case 1:
assert get_coin_sums(1) == [1, 0, 0, 0]
# Test case 2:
assert get_coin_sums(2) == [2, 0, 0, 0]
# Test case 3:
assert get_coin_sums(3) == [3, 0, 0, 0]
# Test case 4:
assert get_coin_sums(4) == [4, 0, 0, 0]
# Test case 5:
assert get_coin_sums(5) == [0, 1, 0, 0]
[/TESTS]
