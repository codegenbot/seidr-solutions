[PYTHON]
def get_probability(n: int, m: int) -> float:
    return sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j) / (n * m)
[/PYTHON]
[TESTS]
# Test case 1:
assert get_probability(1, 2) == 0.0
# Test case 2:
assert get_probability(2, 1) == 0.5
# Test case 3:
assert get_probability(99, 100) == 0.49
# Test case 4:
assert get_probability(100, 99) == 0.5
# Test case 5:
assert get_probability(1, 100) == 0.0
[/TESTS]
