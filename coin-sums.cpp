[PYTHON]
def min_coin_sum(n, coins):
    if n == 0:
        return 0
    min_coins = float('inf')
    for i in range(len(coins)):
        if coins[i] > n:
            continue
        num_coins = min_coin_sum(n-coins[i], coins)
        if num_coins < min_coins:
            min_coins = num_coins
    return min_coins + 1
[/PYTHON]
[TESTS]
# Test case 1:
assert min_coin_sum(6577, [1, 5, 10, 25]) == 263
# Test case 2:
assert min_coin_sum(1000, [1, 5, 10, 25]) == 40
# Test case 3:
assert min_coin_sum(1000000000, [1, 5, 10, 25]) == 20000000
[/TESTS]
