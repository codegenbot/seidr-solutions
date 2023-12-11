def get_probability(n: int, m: int) -> float:
    """
    Return the probability that Peter rolls strictly higher than Colin.
    """
    return (n - m) / (n + m - 1)