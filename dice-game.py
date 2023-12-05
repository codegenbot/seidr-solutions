def get_probability(n: int, m: int) -> float:
    """
    Calculates the probability of Peter rolling strictly higher than Colin given that they both roll their dice at the same time.

    Args:
        n (int): The number of sides on Peter's die.
        m (int): The number of sides on Colin's die.

    Returns:
        float: The probability of Peter rolling strictly higher than Colin.
    """
    total_prob = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                total_prob += 1 / (m * n)
    return total_prob