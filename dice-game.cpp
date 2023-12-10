[PYTHON]
def get_probability(n: int, m: int) -> float:
    """
    Calculate the probability of Peter rolling a higher number than Colin with two dice.

    Args:
        n (int): The number of sides on Peter's die.
        m (int): The number of sides on Colin's die.

    Returns:
        float: The probability of Peter rolling a higher number than Colin.
    """
    total_combinations = n * m
    peter_wins = 0
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if i > j:
                peter_wins += 1
    return peter_wins / total_combinations
[/PYTHON]
[TESTS]
# Test case 1:
assert get_probability(2, 6) == 0.5
# Test case 2:
assert get_probability(3, 6) == 0.3333333333333333
# Test case 3:
assert get_probability(4, 6) == 0.25
# Test case 4:
assert get_probability(5, 6) == 0.2
# Test case 5:
assert get_probability(6, 6) == 0.16666666666666666
[/TESTS]
