
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