[PYTHON]
def get_probability(n, m):
    prob = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                prob += 1.0 / (n * m)
    return f"{prob:.10f}"
[/PYTHON]
[TESTS]
# Test case 1:
assert get_probability(1, 2) == "0.0000000000"
# Test case 2:
assert get_probability(2, 1) == "0.5000000000"
# Test case 3:
assert get_probability(99, 100) == "0.4900000000"
# Test case 4:
assert get_probability(100, 99) == "0.5000000000"
# Test case 5:
assert get_probability(1, 100) == "0.0000000000"
[/TESTS]
