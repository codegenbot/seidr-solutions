[PYTHON]
def get_probability(n: int, m: int) -> float:
    """
    Given two positive integers n and m, return the probability that a random number in the range [1, n] is higher than a random number in the range [1, m].

    The probability should be returned as a floating-point number with 6 digits of precision after the decimal point.

    >>> get_probability(5, 10)
    0.75
    >>> get_probability(10, 5)
    0.25
    """
    # Initialize the probability as 0
    prob = 0.0

    # Iterate over all possible outcomes
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if i > j:
                # Increment the probability by the probability of the current outcome
                prob += 1 / (n * m)

    # Return the probability with 6 digits of precision after the decimal point
    return round(prob, 6)
[/PYTHON]
[TESTS]
# Test case 1:
assert get_probability(5, 10) == 0.75
# Test case 2:
assert get_probability(10, 5) == 0.25
# Test case 3:
assert get_probability(100, 99) == 0.5
[/TESTS]
