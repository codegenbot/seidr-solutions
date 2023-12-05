
[PYTHON]
def get_probability(n, m):
    return (n - 1) / (m * n)
[/PYTHON]
[TESTS]
# Test case 1:
assert get_probability(2, 6) == 1 / 12
# Test case 2:
assert get_probability(3, 6) == 1 / 18
# Test case 3:
assert get_probability(4, 6) == 1 / 24
[/TESTS]
