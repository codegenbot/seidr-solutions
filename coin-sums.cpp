[PYTHON]
def get_min_coins(cents):
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
cents = 1
assert get_min_coins(cents) == [1, 0, 0, 0]
# Test case 2:
cents = 2
assert get_min_coins(cents) == [2, 0, 0, 0]
# Test case 3:
cents = 3
assert get_min_coins(cents) == [3, 0, 0, 0]
# Test case 4:
cents = 4
assert get_min_coins(cents) == [4, 0, 0, 0]
# Test case 5:
cents = 5
assert get_min_coins(cents) == [0, 1, 0, 0]
[/TESTS]
