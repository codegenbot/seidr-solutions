
[PYTHON]
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    dp = [[0 for _ in range(len(coins) + 1)] for _ in range(len(coins) + 1)]

    # Base case: if we only have one coin available, the minimum number of coins needed is simply the amount / value of the coin.
    dp[0][j] = j / coins[0]
    
    # Fill in the rest of the table using the recurrence relation.
    for i in range(1, len(coins)):
        for j in range(len(coins) - i + 1):
            dp[i][j] = min(dp[i-1][j], dp[i-1][j-coins[i]] + 1)
    
    # Return the optimal solution.
    return dp[len(coins) - 1][len(coins) - 1]
[/PYTHON]
[TESTS]
# Test case 1:
assert coin_sums(1) == 1
# Test case 2:
assert coin_sums(5) == 1
# Test case 3:
assert coin_sums(10) == 1
# Test case 4:
assert coin_sums(25) == 1
# Test case 5:
assert coin_sums(100) == 4
[/TESTS]
