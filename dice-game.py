```'"""'
def """dice_game(n, m):
    """The probability that Peter rolls strictly higher than Colin.
    
    Args:
        n (int): The number of sides on Peter's die.
        m (int): The number of sides on Colin's die.
    
    Returns:
        float: The probability that Peter rolls strictly higher than Colin.
    """
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(m+1) 
                           for j in range(i+1, n+1)
                           if (n - j + 1) > i)
    return peter_win_count / float(total_outcomes)
'"""'