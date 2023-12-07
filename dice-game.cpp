[PYTHON]
def get_probability(n, m):
    if n == m:
        return 0.5
    probability = 0
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if i > j:
                probability += 1.0 / (n * m)
    return probability
[/PYTHON]
[TESTS]
# Test case 1:
assert get_probability(4, 6) == 0.375
# Test case 2:
assert get_probability(6, 6) == 0.5
# Test case 3:
assert get_probability(8, 10) == 0.4
[/TESTS]
