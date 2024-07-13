```
def dice_game(n, m):
    """
    This function calculates the probability that Peter rolls strictly higher than Colin.
    """
    total = n * m
    if n == m:
        return 0.5 
    else:
        sum1 = 0
        for i in range(1, min(n,m)+1):
            sum1 += max(0, n-i) * (m-i+1)
        return sum1 / total