````
def roll_dice(n, m):
"""Rolls two dice, returns the probability that Peter rolls strictly higher than Colin.
Peter has an n-sided die and Colin has an m-sided die. If they both roll their 
dice at the same time, return the probability that Peter rolls strictly higher 
than Colin.
Args:
n (int): The number of sides on Peter's die.
m (int): The number of sides on Colin's die.
Returns:
float: The probability that Peter rolls strictly higher than Colin.
"""
total_outcomes = n * m
p_win_count = sum(1 for i in range(m + 1) for j in range(1, min(i, n) + 1) if i > j)

return p_win_count / total_outcomes