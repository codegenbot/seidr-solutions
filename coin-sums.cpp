[PYTHON]
def get_min_coins(cents):
    coins = [1, 5, 10, 25]
    min_coins = 0
    for coin in coins:
        while cents >= coin:
            cents -= coin
            min_coins += 1
    return min_coins
[/PYTHON]
[TESTS]
// Test case 1:
assert get_min_coins(1) == 1
// Test case 2:
assert get_min_coins(5) == 1
// Test case 3:
assert get_min_coins(10) == 1
// Test case 4:
assert get_min_coins(25) == 1
// Test case 5:
assert get_min_coins(15) == 2
// Test case 6:
assert get_min_coins(30) == 2
// Test case 7:
assert get_min_coins(45) == 3
[/TESTS]

```